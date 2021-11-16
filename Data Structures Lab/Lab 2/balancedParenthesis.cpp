#include <iostream>
using namespace std;

#define MAX_SIZE 100
#define ERROR -400

//check palindrome
class stack {
    public:
    int top;
    char a[MAX_SIZE];

    stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_SIZE - 1; }

    void push(char ele) {
        if (isFull()) cout << "Stack-Overflow" << endl;
        else a[++top] = ele;
    }
    char pop() {
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
    stack s; // stack of characters
    char str[MAX_SIZE];
    cout << "Enter the string" << endl;
    cin >> str;
    int length = 0;
    for(int i = 0 ; str[i]!= '\0' ; i++){
        length++;
    }
    cout << "length of the string: ";
    cout << length << endl;

    for(int i = 0 ; i < length ; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        }
        if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
            if(s.isEmpty()){
                cout << "Unbalanced Parenthesis" << endl;
                return -1;
                break;
            };
            if(s.top == '('){
                s.pop();
                continue;
            }
            if(s.top == '{'){
                s.pop();
                continue;
            }
            if(s.top == '{'){
                s.pop();
                continue;
            }
        }
        s.display();
    }

    s.isEmpty()? cout << "Balanced parenthesis" : cout << "Unbalanced Parenthesis" << endl;
}
