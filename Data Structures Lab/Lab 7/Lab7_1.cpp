#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

class Stack {
   public:
    int top;
    Node *a[100];

    Stack() { top = -1; }
    bool empty() { return top == -1; }
    bool isFull() { return top == 100 - 1; }
    Node *top() { return a[top]; }

    void push(Node *ele) {
        if (isFull())
            cout << "Stack-Overflow" << endl;
        else
            a[++top] = ele;
    }
    Node *pop() {
        if (empty()) {
            cout << "Stack-Underflow" << endl;
            return NULL;
        } else {
            return a[top--];
        }
    }
    void display() {
        if (empty())
            cout << "Empty-Stack" << endl;
        else {
            for (int i = 0; i <= top; i++) {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
};

class Tree {
   public:
    Node *root;

    Node *createTree() {
        int val;
        cin >> val;
        if (val == -1)
            return NULL;
        Node *temp = new Node;
        temp->data = val;
        cout << "Left child of " << val << endl;
        temp->left = createTree();
        cout << "Right child of " << val << endl;
        temp->right = createTree();
        return temp;
    }

    Tree() {
        root = NULL;
    }
    void create() {
        cout << "Use -1 to break" << endl;
        cout << "Enter root" << endl;
        root = createTree();
    }

    void iterativePreorder() const {
        cout << "Iterative Preorder Traversal >>";
        if (root == NULL)
            return;
        Stack S;
        Node *curr = root;
        S.push(curr);
        while (!S.empty()) {
            curr = S.top();
            S.pop();
            cout << curr->data << ' ';
            if (curr->right)
                S.push(curr->right);
            if (curr->left)
                S.push(curr->left);
        }
        cout << endl;
    }

    void iterativeInorder() const {
        cout << "Iterative Inorder Traversal >>";
        if (root == NULL)
            return;
        Stack S;
        Node *curr = root;
        while (curr != NULL || !S.empty()) {
            while (curr != NULL) {
                S.push(curr);
                curr = curr->left;
            }
            curr = S.top();
            S.pop();
            cout << curr->data << ' ';
            curr = curr->right;
        }
        cout << endl;
    }

    void iterativePostorder() const {
        cout << "Iterative Postorder Traversal >>";
        if (root == NULL)
            return;
        Stack S;
        Node *curr = root;
        do {
            while (curr) {
                if (curr->right)
                    S.push(curr->right);
                S.push(curr);
                curr = curr->left;
            }
            curr = S.top();
            S.pop();
            if (curr->right && S.top() == curr->right) {
                S.pop();
                S.push(curr);
                curr = curr->right;
            } else {
                cout << curr->data << ' ';
                curr = NULL;
            }
        } while (!S.empty());
        cout << endl;
    }

    int counter(Node *node) const {
        if (node == NULL)
            return 0;
        int lDepth = counter(node->left);
        int rDepth = counter(node->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
    int countleafs(Node *node) {
        static int count = 0;
        if (node == NULL) {
            count++;
            return 0;
        }
        countleafs(node->left);
        countleafs(node->right);
        return count;
    }
    void leafs() {
        cout << "Leafs present: " << countleafs(root) / 2 << endl;
    }
};
int main() {
    Tree bt;
    bt.create();
    bt.iterativeInorder();
    bt.iterativePostorder();
    bt.iterativePreorder();
    bt.leafs();
}