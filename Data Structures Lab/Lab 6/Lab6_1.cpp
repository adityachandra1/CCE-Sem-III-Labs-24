#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next, *prev;
};

class DoublyLinkedList {
   private:
    Node *head, *tail;

   public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    //1
    void insert_end(int elem) {
        Node *temp = new Node;
        temp->data = elem;
        temp->next = NULL;
        if (head == NULL) {
            // list is empty
            temp->prev = NULL;
            head = temp;
        } else {
            temp->prev = tail;
            tail->next = temp;
        }
        tail = temp;
    }

    //2
    void delete_end() {
        Node *temp = tail;
        if (temp->prev == NULL) {
            head = tail = NULL;
            delete temp;
            return;
        }
        temp->prev->next = NULL;
        tail = temp->prev;
        delete temp;
        return;
    }

    //3
    void insert_pos(int elem, int pos) {
        Node *temp = new Node;
        Node *trav = new Node;
        temp->data = elem;
        trav = head;
        int count = 0;
        while (trav != NULL) {
            if (count == pos) {
                break;
            }
            count++;
            trav = trav->next;
        }
        if (trav == NULL) {
            insert_end(elem);
            return;
        }
        trav->prev->next = temp;
        temp->prev = trav->prev;
        temp->next = trav;
        trav->prev = temp;
    }

    //4
    void delete_pos(int pos) {
        Node *trav;
        trav = head;
        if (pos == 0) {
            head = trav->next;
            delete trav;
            return;
        }
        int count = 0;
        while (trav != NULL) {
            if (count == pos) {
                break;
            }
            count++;
            trav = trav->next;
        }
        if (trav == NULL) {
            delete_end();
        }
        trav->prev->next = trav->next;
        trav->next->prev = trav->prev;
    }

    //5
    void insert_after(int elem, int val) {
        Node *temp = new Node;
        Node *trav = new Node;
        temp->data = elem;
        trav = head;
        bool found = false;
        while (trav != NULL) {
            if (val == trav->data) {
                found = true;
                if (trav->next != NULL)
                    trav->next->prev = temp;
                else
                    tail = temp;
                temp->next = trav->next;
                trav->next = temp;
                temp->prev = trav;
                break;
            }
            trav = trav->next;
        }
        if (!found) {
            cout << "Element not found" << endl;
        }
    }

    //6
    void insert_before(int elem, int val) {
        Node *temp = new Node;
        Node *trav = new Node;
        temp->data = elem;
        trav = tail;
        bool found = false;
        while (trav != NULL) {
            if (val == trav->data) {
                found = true;
                if (trav->prev != NULL)
                    trav->prev->next = temp;
                else
                    head = temp;
                temp->prev = trav->prev;
                trav->prev = temp;
                temp->next = trav;
                break;
            }
            trav = trav->prev;
        }
        if (!found) {
            cout << "Element not found" << endl;
        }
    }

    //7
    void display() {
        Node *trav = new Node;
        trav = head;
        while (trav != NULL) {
            cout << trav->data << " <-> ";
            trav = trav->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    int opt;
    int pos, elem;
    cout << "Enter the Option:" << endl;
    cout << "1.Insert at end" << endl;
    cout << "2.Delete from end" << endl;
    cout << "3.Insert at Position" << endl;
    cout << "4.Delete from Position" << endl;
    cout << "5.Insert after another element" << endl;
    cout << "6.Insert before another element" << endl;
    cout << "7.Print the list" << endl;
    cout << "9.Exit" << endl;

    while (true) {
        cout << ">Enter Option:  ";
        cin >> opt;
        switch (opt) {
            case 1:
                cout << "Enter the element to insert:";
                cin >> elem;
                dll.insert_end(elem);
                break;
            case 2:
                dll.delete_end();
                break;
            case 3:
                cout << "Enter the location:";
                cin >> pos;
                cout << "Enter the element to insert:";
                cin >> elem;
                dll.insert_pos(elem, pos);
                break;
            case 4:
                cout << "Enter the location:";
                cin >> pos;
                dll.delete_pos(pos);
                break;
            case 5:
                cout << "Enter the element to insert after:";
                cin >> pos;
                cout << "Enter the element to insert:";
                cin >> elem;
                dll.insert_after(elem, pos);
                break;
            case 6:
                cout << "Enter the element to insert before:";
                cin >> pos;
                cout << "Enter the element to insert:";
                cin >> elem;
                dll.insert_before(elem, pos);
                break;
            case 7:
                cout << "Linked List : ";
                dll.display();
                break;
            case 9:
                return 0;
            default:
                cout << "Invalid Choice!" << endl;
        }
    }
}