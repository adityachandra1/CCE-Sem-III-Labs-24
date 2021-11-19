#include <iostream>
using namespace std;

#define MAX_SIZE 100
#define ERROR -400

//check palindrome
class stack {
    int top;
    char a[MAX_SIZE];

   public:
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

    int mid = length/2;

    for(int i = 0 ; i < mid ; i++){
        s.push(str[i]);
    }

    if(length&1) mid++;
    bool flag = true;
    cout << "Stack : " ;
    s.display();
    for(int i = mid; i < length ; i++){
        if(s.pop() != str[i]){
            cout << "Not a Palindrome" << endl;
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes it is a palindrome" << endl;
}
