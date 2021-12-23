#include <string.h>

#include <iostream>
#define maxsize 100

using namespace std;

bool isOperand(char x) {
    return (x >= 'a' && x <= 'z') ||
           (x >= 'A' && x <= 'Z');
}

class stack {
    public:
    int top;
    string a[maxsize];

    stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == maxsize - 1; }

    void push(string ele) {
        if (isFull()) cout << "Stack-Overflow" << endl;
        else a[++top] = ele;
    }
    string pop() {
        if (isEmpty()) {
            cout << "Stack-Underflow" << endl;
            return " ";
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


string postfix2infix(string exp) {
    stack s;

    for (int i = 0; exp[i] != '\0'; i++) {
        if (isOperand(exp[i])) {
            string op(1, exp[i]);
            s.push(op);
        }

        else {
            string op1 = s.pop();
            string op2 = s.pop();
            s.push("(" + op2 + exp[i] +
                   op1 + ")");
        }
    }
    return s.pop();
}


int main() {
    stack s;
    string postfix;
    cout << "Enter the postfix expression: ";
    cin >> postfix;
    cout << postfix2infix(postfix);

    return 0;
}
