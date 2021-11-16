#include <string.h>

#include <iostream>

using namespace std;

#define N 100

//Overloading Swap function
void swap(int *x, int *y) {
    int *temp = x;
    x = y;
    y = temp;
}
void swap(char *ch1, char *ch2) {
    char *temp = ch1;
    ch1 = ch2;
    ch2 = temp;
}
void swap(char str1[N], char str2[N], int n , int m) {
    char temp[N];
    for (int j = 0; j < N; j++){
        temp[j] = str1[j];
        str1[j] = str2[j];
        str2[j] = temp[j];
    }
}

int length(char s[]) {
    int i = 0;
    int cnt = 0;
    while (s[i] != '\0') {
        cnt++;
        i++;
    }
    return cnt;
}

class student {
   private:
    char name[N];
    char grade;
    int roll;

   public:
    void display(student list[], int n) {
        for (int i = 0; i < n; i++) {
            cout << "Name : " << list[i].name << endl;
            cout << "Roll No : " << list[i].roll << endl;
            cout << "Grade :  " << list[i].grade << endl;
            cout << endl;
        }
    }

    void read(student list[], int n) {
        for (int i = 0; i < n; i++) {
            cout << "Student " << i + 1 << endl;
            cout << "Enter Roll Number: " << endl;
            cin >> list[i].roll;
            cout << "Enter Name  : " << endl;
            cin.ignore();
            cin.getline(list[i].name, N);
            cout << "Enter Grade : " << endl;
            cin >> list[i].grade;
            cout << endl;
        }
    }

    void sort(student list[], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (list[j].roll > list[j + 1].roll) {
                    swap(list[j].name, list[j + 1].name, 0 , 0);
                    swap(list[j].roll, list[j + 1].roll);
                    swap(list[j].grade, list[j + 1].grade);
                }
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter the Number of students" << endl;
    cin >> n;
    student list[n];
    student obj;
    obj.read(list, n);
    obj.sort(list, n);
    cout << "\n\n The sorted list of students is as follows: \n\n"
         << endl;
    obj.display(list, n);
}
