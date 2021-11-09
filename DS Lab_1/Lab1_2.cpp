
#include <iostream>
#include <string.h>

using namespace std;

#define N 100
int ROLL = 0;

int length(char s[]){
    int i = 0;
    int cnt = 0;
    while(s[i] != '\0'){
        cnt++;
        i++;
    }
    return cnt;
}

class student{
    private:
    char name[N];
    char grade;
    int roll;
    public:
    void display(){
        cout << "Name : " << name << endl;
        cout << "Roll No : " << roll << endl;
        cout << "Grade :  " << grade << endl;
    }
    void read(){
        char nm[N];
        char gd;

        cin >> nm;
        int n = length(nm);
        for(int i = 0 ; i < n; i++){
            name[i] = nm[i];
        }
        name[n] = '\0';
        cout << "Enter Grade" << endl;
        cin >> gd;
        grade = gd;
        roll = ++ROLL;
    }
};

int main(){
    int n;
    cout << "Enter the Number of students" << endl;
    cin >> n;
    student s[n];
    for(int i = 0 ; i < n ; i++){
        cout << "Enter Name of Student " << i+1 << " : " <<  endl;
        s[i].read();
    }
    cout << endl;
    cout << "Following is the list of Students" << endl;
    for(int i = 0 ; i < n; i++){
        s[i].display();
        cout << endl;
    }
}
