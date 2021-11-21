#include <iostream>

using namespace std;

#define MAX_SIZE 100
#define ERROR -400

class stack {
    int top;
    int a[MAX_SIZE];

   public:
    stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_SIZE - 1; }
    void push(int ele) {
        if (isFull()) cout << "Stack-Overflow" << endl;
        else a[++top] = ele;
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack-Underflow" << endl;
            return ERROR;
        } else {
            return a[top--];
        }
    }
    void display(){
        if (isEmpty()) cout << "Empty-Stack" << endl;
        else{
            for (int i = 0; i <= top; i++){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    s.pop();
    s.pop();
    s.display();
}