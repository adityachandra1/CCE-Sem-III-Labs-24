#include <iostream>
using namespace std;

class Node {
   public:
    int coeff, power;
    Node *next;
    Node(int coeff, int power) {
        this->coeff = coeff;
        this->power = power;
        this->next = NULL;
    }
};

void addPolynomials(Node *head1, Node *head2) {
    if (head1 == NULL && head2 == NULL)
        return;
    else if (head1->power == head2->power) {
        cout << " " << head1->coeff + head2->coeff << "x^" << head1->power << " +";
        addPolynomials(head1->next, head2->next);
    } else if (head1->power > head2->power) {
        cout << " " << head1->coeff << "x^" << head1->power << " +";
        addPolynomials(head1->next, head2);
    } else {
        cout << " " << head2->coeff << "x^" << head2->power << " + ";
        addPolynomials(head1, head2->next);
    }
}

void insert(Node *head, int coeff, int power) {
    Node *new_node = new Node(coeff, power);
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = new_node;
}

void printList(Node *head) {
    cout << "Polynomial: " << endl;
    while (head != NULL) {
        cout << " " << head->coeff << "x"
             << "^" << head->power;
        head = head->next;
        cout << " +";
    }
    cout << " 0" << endl;
}

int main() {
    Node *head = new Node(5, 2);
    insert(head, 4, 1);
    Node *head2 = new Node(6, 2);
    insert(head2, 4, 1);
    printList(head);
    cout << endl;
    printList(head2);
    cout << endl << "Addition:" << endl;
    addPolynomials(head, head2);
    cout << " 0 " << endl;

    return 0;
}