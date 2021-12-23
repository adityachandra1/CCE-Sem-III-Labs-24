

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

int evaluatePrefix(char str[]){
    stack st;
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    i--;
    while(i > -1){
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
        i--;
    }
    return st.pop();
}

int main(){
    char prefix[100], postfix[100];
    cout << "Enter Prefix Expession";
    cin >> prefix;
    cout << evaluatePrefix(prefix) << endl;
    cout << "Enter postfix Expession";
    cin >> postfix;
    cout << evaluatePostfix(postfix) <<endl;
}
          