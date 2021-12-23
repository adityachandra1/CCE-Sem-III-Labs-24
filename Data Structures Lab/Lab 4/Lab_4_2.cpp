
#include <iostream>
#include <string.h>
using namespace std;

#define MAX_SIZE 50

int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

class stack {
    public:
    int top;
    int a[MAX_SIZE];

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
            return -999999;
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

void infix2postfix(char infix[]){
    stack st;
    char postfix[50] = {0};
    int curr = 0; // curr ptr for postfix;
    char c;

    for(int i = 0 ; infix[i] != '\0' ; i++){
        c = infix[i];
        cout << postfix;
        if( c >= 'a' && c <= 'Z' || c >= 'A' && c <= 'Z'|| c >= '0' && c <= '9'){
            postfix[curr++] = c;
             cout << postfix;
        }

        else if(c == '(') st.push('(');
        else if(c == ')'){
            while(st.top != '(') postfix[curr++] = st.pop();
            st.pop();
        }else{
            while(!st.isEmpty() && prec(infix[i]) <= prec(st.top)){
                postfix[curr++] = st.pop();
            }
            st.push(c);
        }
    }

    while(!st.isEmpty()){
        postfix[curr++] = st.pop();
    }

    cout << postfix << endl;

}

int evaluatePostfix(char str[]){
    stack st;
    for(int i = 0 ; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            st.push(str[i] - '0');
        }else{
            int val1 = st.pop();
            int val2 = st.pop();
            switch(str[i]){
                case '+': st.push(val2 + val1); break;
                case '-': st.push(val2 - val1); break;
                case '*': st.push(val2 * val1); break;
                case '/': st.push(val2 / val1); break;
                case '%': st.push(val2 % val1) ; break;
            }
        }
    }
    return st.pop();
}

int main(){
    char postfix[100];
    cin >> postfix;
    cout << evaluatePostfix(postfix);
}
