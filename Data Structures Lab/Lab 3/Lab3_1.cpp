#include <iostream>
using namespace std;

#define MAX_SIZE 100

class queue{
    int front;
    int rear;
    int q[MAX_SIZE];

public:
    queue(){
        front = 0 ;
        rear = -1;
    }

    int frontElement(){
        return q[front];
    }

    void insert(int ele){
        if (rear == MAX_SIZE - 1) cout << "Queue Overflow" << endl;
        else q[++rear] = ele;
    }
    int deleteq (){
        if (front > rear) return -1;
        else q[front++];
    }
    void display(){
        if(front > rear) cout << "Queue Empty" << endl;
        else{
            cout << "Queue" << endl;
            for(int i = front ; i <= rear ; i++){
                cout << q[i] << " ";
            }
        }
        cout << endl;
    }
};

int main(){
    queue qu;
    qu.insert(10);
    qu.insert(20);
    qu.insert(30);
    cout << qu.frontElement() << endl;
    qu.display();
    qu.deleteq();
    qu.deleteq();
    qu.display();
}
