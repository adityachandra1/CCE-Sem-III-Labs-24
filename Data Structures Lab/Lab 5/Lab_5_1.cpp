#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class LinkedList{
private:
    Node *head;
public:
    LinkedList(){
        head = NULL;
    }

    bool isEmpty(){
        return head == NULL;
    }

    //1
    void insert_begin(int x){
        Node* node = new Node(x);
        if(isEmpty()){
            head = node;
            return;
        }else{
           node -> next = head;
           head = node;
           return;
        }
    }

    //2
    void insert_end(int x){
        Node* node = new Node(x);

        if(!head){
            head = node;
        }else{
            Node*temp = head;
            while(temp -> next){
                temp = temp ->next;
            }
            temp ->next = node;
        }
        return;
    }

    //3
    void insert_before(int pos, int x){
        Node* node = new Node(x);
        Node* temp = head;
        int currPos = 0;
        while(currPos < pos && temp){
            temp = temp -> next;
            currPos++;
        }
        node->next = temp -> next;
        temp -> next = node;
    }

     //4
    void insert_after(int pos, int x){
        Node* node = new Node(x);
        Node* temp = head;
        int currPos = 0;
        while(currPos < pos && temp){
            temp = temp -> next;
            currPos++;
        }
        temp = temp -> next;
        node->next = temp -> next;
        temp -> next = node;
    }

    //5
    void delete_at_pos(int pos){
        Node *prev = head;
        Node* temp = head;
        temp = temp->next;
        int currPos = 1;
        while(currPos < pos && temp){
            prev = temp;
            temp = temp -> next;
            currPos++;
        }
    }

    //6
    void display(){
        Node* temp = head;
        if(isEmpty()){
            cout << "Empty" << endl;
        }else{
            while(temp){
                    cout << temp->data<< "->";
                    temp = temp -> next;
            }
            cout << endl;
        }
    }
};


int main(){

    LinkedList ll;
    ll.insert_begin(1);
    ll.insert_begin(2);
    ll.insert_begin(69);
    ll.display();
    ll.insert_end(3);
    ll.insert_end(4);
    ll.display();
    /*
    int opt;
    cin >> opt;

    Node*head;
    switch(opt){
    case 1:
        int k;
        cin >> k;
        push_front(&head, k);
        break;

    case 2:
        int k;
        cin >> k;
        push_back(&head, k);
        break;

    case 3:
        int  k;
        cin >> k;
        int pos;
        cin >> pos;
        insert_before(&head, k , pos);
        break;

    case 4:
        int k;
        cin >> k;
        int pos;
        cin>> pos;
        insert_after(&head, k, pos);
        break;

    case 5:
        int k;
        cin >> k;
        delete_element(&head, k);
        break;

    case 6:
        display(head);
        break;
    }
    */
}
