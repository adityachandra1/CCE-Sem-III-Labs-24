#include <iostream>

using namespace std;

class Node{
    int val;
    Node * next;
    Node * prev;

    Node(int x){
        val = x;
        prev = NULL;
        next = NULL;
    }
};

class doublyLinkedList{
public:
    Node* head;
    doublyLinkedList{
        head = NULL;
    }

    void insert_rear(int x){
        Node* node = new Node(x);
        Node*temp = head;
        while (temp -> next){
            temp = temp -> next;
        }
        temp -> next = node;
        node -> prev = temp;
        node -> next = NULL;
    }

    void delete_rear(){
         Node*temp = head;
        while (temp -> next -> next){
            temp = temp -> next;
        }
        Node* deleted = temp -> next
        deleted -> prev = NULL;
        temp -> next = NULL;
        delete(deleted);
    }

    void insert_at_pos(int x, int pos){
        Node* node = new Node(x);
        Node* temp = head;
        int curr = 0;
        while(curr < pos-1 && temp -> next){
            temp = temp -> next;
            curr++;
        }
        node ->
    }

    void delete_at_pos(int pos){
        Node* node = new Node(x);
        Node* temp = head;
        int curr = 1;
        while(curr < pos-1 && temp -> next){
            temp = temp -> next;
            curr++;
        }
    }

    void insert_after(int x, int pos){
         Node* node = new Node(x);
        Node* temp = head;
        int curr = 1;
        while(curr < pos && temp -> next){
            temp = temp -> next;
            curr++;
        }
    }

    void insert_before(int x, int pos){
         Node* node = new Node(x);
        Node* temp = head;
        int curr = 0;
        while(curr < pos-1 && temp -> next){
            temp = temp -> next;
            curr++;
        }
    }

    void display(){
        Node* temp = head;
        while(temp -> next){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << endl;
    }
};

