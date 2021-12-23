#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class LinkedList {
   private:
    Node* head;

   public:
    LinkedList() {
        head = NULL;
    }

    bool isEmpty() {
        return head == NULL;
    }

    //1
    void insert_begin(int x) {
        Node* node = new Node(x);
        if (isEmpty()) {
            head = node;
            return;
        } else {
            node->next = head;
            head = node;
            return;
        }
    }

    //2
    void insert_end(int x) {
        Node* node = new Node(x);

        if (!head) {
            head = node;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = node;
        }
        return;
    }

    //3
    void insert_before(int pos, int x) {
        Node* node = new Node(x);
        Node* temp = head;
        if (pos == 1) {
            node->next = head;
            head = node;
            return;
        }
        int currPos = 1;
        while (currPos < pos - 1 && temp) {
            temp = temp->next;
            currPos++;
        }
        node->next = temp->next;
        temp->next = node;
    }

    //4
    void insert_after(int pos, int x) {
        Node* node = new Node(x);
        Node* temp = head;
        int currPos = 1;
        while (currPos < pos && temp) {
            temp = temp->next;
            currPos++;
        }
        node->next = temp->next;
        temp->next = node;
    }

    //5
    void delete_at_pos(int pos) {
        if (!head) {
            cout << "Empty" << endl;
            return;
        }
        if (pos == 1) {
            Node* temp = head;
            head = head->next;
            delete (temp);
            return;
        }
        Node* prev = head;
        Node* temp = head;
        temp = temp->next;
        int currPos = 2;
        while (currPos < pos && temp) {
            prev = temp;
            temp = temp->next;
            currPos++;
        }
        prev->next = temp->next;
        delete (temp);
    }

    //6
    void display() {
        Node* temp = head;
        if (isEmpty()) {
            cout << "Empty" << endl;
        } else {
            while (temp) {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    LinkedList ll;
    // ll.insert_begin(1);
    // ll.insert_begin(2);
    // ll.insert_begin(69);
    // ll.display();
    // ll.delete_at_pos(3);
    // ll.delete_at_pos(1);
    // ll.display();
    // ll.insert_end(3);
    // ll.insert_end(4);
    // ll.display();
    // ll.insert_before(3, 8);
    // ll.insert_after(3, 9);
    // ll.display();
    // ll.delete_at_pos(3);
    // ll.delete_at_pos(1);
    // ll.display();

    int opt, k, pos, flag = 0;
    cout << "Enter 1 to insert node at beginning\n, 2 for inserting node at end, 3 for insert node before a position\n, 4 for inserting node after a position\n, 5 for delteing node at position, 6 for displaying a linked list, 7 to exit" << endl;
    while (flag != 1) {
        cin >> opt;
        switch (opt) {
            case 1:
                cout << "Enter Element" << endl;
                cin >> k;
                ll.insert_begin(k);
                break;

            case 2:
                cout << "Enter Element" << endl;
                cin >> k;
                ll.insert_end(k);
                break;

            case 3:
                cout << "Enter Element" << endl;
                cin >> k;
                cout << "Enter Postion" << endl;
                cin >> pos;
                ll.insert_before(pos, k);
                break;

            case 4:
                cout << "Enter Element" << endl;
                cin >> k;
                cout << "Enter Postion" << endl;
                cin >> pos;
                ll.insert_after(pos, k);
                break;

            case 5:
                cout << "Enter Position" << endl;
                cin >> k;
                ll.delete_at_pos(k);
                break;

            case 6:
                ll.display();
                break;
            case 7:
                flag = 1;
                break;
        }
    }
}
