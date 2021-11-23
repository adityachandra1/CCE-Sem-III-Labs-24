#include <iostream>

using namespace std;

#define N 100

// a
int length(char s1[]) {
    int i = 0;
    int cnt = 0;
    while (s1[i] != '\0') {
        cnt++;
        i++;
    }
    return cnt;
}

// b
void concatenate(char s1[], char s2[]) {
    int n = length(s1);
    int m = length(s2);
    int j = 0;
    for (int i = n; i < m + n; i++) {
        s1[i] = s2[j];
        j++;
    }
    s1[m + n] = '\0';
}

// c
int compare(char s1[], char s2[]) {
    int i = 0;
    if (length(s1) - length(s2) != 0) {
        cout << "Different Lengths" << endl;
    }
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] - s2[i] != 0) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}

// d
void insert_substring(char s1[], char s2[], int pos) {
    char temp[100];
    int n = length(s1), m = length(s2);
    for (int i = pos; i < n; i++) {
        temp[i - pos] = s1[i];
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        s1[pos + i] = s2[i];
    }
    int j = 0;
    for (int i = pos + m; i < m + n; i++) {
        s1[i] = temp[j];
        j++;
    }
    s1[m + n] = '\0';
}

// e
void delete_substring(char s1[], int start, int end) {
    char temp[100];
    int n = length(s1);
    int new_length = n - (end - start);
    int i = 0;
    while (s1[end + i] != '\0') {
        s1[start + i] = s1[end + i];
        i++;
    }
    s1[new_length] = '\0';
}

int main() {
    char s1[N], s2[N];
    cout << "Enter String" << endl;
    cin >> s1;

    int opt;
    cout << "Choose Option" << endl;
    cout << "1. Length \n 2. Concatenate \n 3. Compare\n 4. Insert Substring \n 5. Delete Substring" << endl;
    cin >> opt;

    int flag = 0, start, end, cmpr;

    switch (opt) {
        case 1:
            cout << "Length is " << length(s1) << endl;
            break;

        case 2:
            cout << "Enter the string to be concatenated" << endl;
            cin >> s2;
            cout << "After Concatenation: ";
            concatenate(s1, s2);
            cout << s1 << endl;
            break;

        case 3:
            cout << "Enter the string to be compared" << endl;
            cin >> s2;
            cmpr = compare(s1, s2);
            cmpr == 0 ? cout << "Matched" << endl : cout << "Not Matched, Difference = " << cmpr << endl;
            break;

        case 4:
            cout << "Enter the string to be inserted" << endl;
            cin >> s2;
            cout << "Enter position" << endl;
            int pos;
            cin >> pos;
            cout << "After Insertion" << endl;
            insert_substring(s1, s2, pos);
            cout << s1 << endl;
            break;

        case 5:
            cout << "Enter the starting and the ending positions of the substring to be deleted" << endl;
            cin >> start >> end;
            delete_substring(s1, start, end);
            cout << "After Deletion : ";
            cout << s1 << endl;
            break;
    }
}