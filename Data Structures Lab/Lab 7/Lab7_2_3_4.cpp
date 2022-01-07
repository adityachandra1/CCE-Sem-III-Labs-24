#include <iostream>
using namespace std;

//By Aditya Chandra

class Node {
   public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//2
//2. Write a program to insert an element into a binary search tree.
Node* insert(Node* root, int val) {
    if (root == NULL) return new Node(val);

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

//3
// 3. Write a program to delete an element from a binary search tree.
Node* search(Node* root, int key) {
    if (root == NULL) return NULL;
    if (root->data == key) return root;

    if (root->data > key) {
        return search(root->left, key);
    }

    return search(root->right, key);
}

//helper function for Question 4
Node* inorderSuccessor(Node* root) {
    Node* curr = root;
    while (curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

//4
// 4. Write a program to search for a given element in a binary search tree.
Node* deleteBST(Node* root, int key) {
    if (key < root->data) {
        root->left = deleteBST(root->left, key);
    }
    if (key > root->data) {
        root->right = deleteBST(root->right, key);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
    return root;
}

//print BST
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;
    // root = insert(root, 45);
    // root = insert(root, 69);
    // root = insert (root , 3);
    // root = insert(root, 34);
    // root = insert(root, 10);

    // inorder(root);
    // cout << endl;

    // root = deleteBST(root, 45);
    // inorder(root);

    cout << "\n";
    int opt = 1;
    cout << "Enter 1 to insert an element to BST\n 2 to search an element in the BST\n 3 to delete an element from BST\n 4 to print BST and 0 to exit the program\n"
         << endl;

    int key;
    while (opt != 0) {
        cout << "Enter Option: " << endl;
        cin >> opt;
        switch (opt) {
            case 1:
                cout << "Enter element to be inserted" << endl;
                cin >> key;
                root = insert(root, key);
                break;
            case 2:
                cout << "Enter element to be searched" << endl;
                cin >> key;
                if (search(root, key) != NULL) {
                    cout << "Key exists" << endl;
                } else {
                    cout << "Key doesnt exist" << endl;
                }
                break;
            case 3:
                cout << "Enter element to be deleted" << endl;
                cin >> key;
                root = deleteBST(root, key);
                cout << "New BST: ";
                inorder(root);
                cout << endl;
                break;
            case 4:
                cout << "BST : ";
                inorder(root);
                cout << endl;
                break;
        }
    }

    return 0;
}