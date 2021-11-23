#include <iostream>
#include <string.h>

using namespace std;

#define MAX_SIZE 100
#define ERROR -400

class stack {
    public:
    int top;
    int a[MAX_SIZE];


    stack() { top = -1; }
    int topElement(){
        return a[top];
    }
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
    int num;
    cout << "enter decimal number" << endl;
    cin >> num;
    int temp = num;
    int base;
    cout << "enter base" << endl;
    cin >> base;

    stack s;
    while(temp!=0){
     s.push(temp%base);
     cout << temp%base << endl;
     temp /= base;
    }
    s.display();
    cout << num << " in base " << base  << " is"  << endl;
    while(!s.isEmpty()){
        // cout << s.topElement();
        if(s.topElement() >= 10){
            cout << char( 55 + int(s.topElement()));
        }else{
            cout << s.topElement();
        }
        s.pop();
    }
    cout << endl;

}
