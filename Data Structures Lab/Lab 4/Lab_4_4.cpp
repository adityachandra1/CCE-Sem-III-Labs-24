#include <iostream>
using namespace std;
#define MAX_SIZE 100

bool isOperator(char c) {
    return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C) {
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

class stack {
   public:
    int top;
    char a[MAX_SIZE];

    stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_SIZE - 1; }
    char top_ele() { return a[top]; }

    void push(char ele) {
        if (isFull())
            cout << "Stack-Overflow" << endl;
        else
            a[++top] = ele;
    }
    char pop() {
        if (isEmpty()) {
            cout << "Stack-Underflow" << endl;
            return ' ';
        } else {
            return a[top--];
        }
    }
    void display() {
        if (isEmpty())
            cout << "Empty-Stack" << endl;
        else {
            for (int i = 0; i <= top; i++) {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
};

string infixToPostfix(string infix) {
    infix = '(' + infix + ')';
    int l = infix.size();
    stack s;
    string post;

    for (int i = 0; i < l; i++) {
        if (isalpha(infix[i]) || isdigit(infix[i]))
            post += infix[i];

        else if (infix[i] == '(')
            s.push('(');

        else if (infix[i] == ')') {
            while (s.top_ele() != '(') {
                post += s.top_ele();
                s.pop();
            }
            s.pop();
        } else {
            if (isOperator(s.top_ele())) {
                if (infix[i] == '^') {
                    while (getPriority(infix[i]) <= getPriority(s.top_ele())) {
                        post += s.top_ele();
                        s.pop();
                    }

                } else {
                    while (getPriority(infix[i]) < getPriority(s.top_ele())) {
                        post += s.top_ele();
                        s.pop();
                    }
                }

                s.push(infix[i]);
            }
        }
    }
    while (!s.isEmpty()) {
        post += s.top_ele();
        s.pop();
    }
    return post;
}

string reverse(string s) {
    int n = s.length() / 2;
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - i - i];
        s[n - i - 1] = temp;
    }
    return s;
}
string infixToPrefix(string infix) {
    int l = infix.size();
    reverse(infix);
    for (int i = 0; i < l; i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
            i++;
        } else if (infix[i] == ')') {
            infix[i] = '(';
            i++;
        }
    }
    string prefix = infixToPostfix(infix);
    reverse(prefix);
    return prefix;
}

// Driver code
int main() {
    string s = ("x+y*z/w+u");
    cout << infixToPrefix(s) << std::endl;
    return 0;
}