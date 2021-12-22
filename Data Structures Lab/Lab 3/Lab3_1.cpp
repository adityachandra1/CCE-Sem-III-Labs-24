#include <iostream>
using namespace std;

#define MAX_SIZE 100

class queue {
    int front;
    int rear;
    int q[MAX_SIZE];

   public:
    queue() {
        front = 0;
        rear = -1;
    }

    int frontElement() {
        return q[front];
    }

    void insert(int ele) {
        if (rear == MAX_SIZE - 1)
            cout << "Queue Overflow" << endl;
        else
            q[++rear] = ele;
    }
    int deleteq() {
        if (front > rear) {
            cout << "Queue Empty" << endl;
            return -1;
        } else
            return q[front++];
    }
    void display() {
        if (front > rear)
            cout << "Queue Empty" << endl;
        else {
            cout << "Queue : ";
            for (int i = front; i <= rear; i++) {
                cout << q[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    queue qu;
    qu.insert(10);
    qu.insert(20);
    qu.insert(30);
    qu.display();

    int opt, flag = 0;

    cout << "Enter 1 for inserting an element\n 2 for deleting an element\n 3 for getting the top element\n 4 to display the queue\n 5 to exit\n"
         << endl;
    while (flag != 1) {
        cout << "Enter Option" << endl;
        cin >> opt;
        switch (opt) {
            case 1:
                int x;
                cout << "Enter the element to be inserted" << endl;
                cin >> x;
                qu.insert(x);
                break;
            case 2:
                cout << "Element Deleted " << qu.deleteq() << endl;
                break;
            case 3:
                cout << "Top Element in the queue: " << qu.frontElement() << endl;
                break;
            case 4:
                qu.display();
                break;
            case 5:
                flag = 1;
                break;
        }
        cout << endl;
    }
}
