#include <iostream>

using namespace std;

#define N 100

int length(char s[]){
    int i = 0;
    int cnt = 0;
    while(s[i] != '\0'){
        cnt++;
        i++;
    }
    return cnt;
}

int main(){
    char s[N], s2[N];
    cout << "Enter String" << endl;
    cin >> s;
    int opt;
    cout << "Choose Option" << endl;
    cout << "1. Length \n 2. Concatenate \n 3. Compare\n 4. Insert Substring \n 5. Delete Substring" << endl;
    cin >> opt;
    int m = length(s), j , n;
    bool flag;
    int start , end;
    switch(opt){
    case 1:
        cout << "Length is " << length(s) << endl;
        break;
    case 2:
        cout << "Enter the string to be concatenated" << endl;
        cin >> s2;
        n = length(s2);
        j = m;
        for(int i = 0 ; i < n; i++){
            s[j] = s2[i];
            j++;
        }
        s[n] = '\0';
        cout << s << endl;
        break;
    case 3:
        cout << "Enter the string to be compared" << endl;
        cin >> s2;
        n = length(s2);
        flag = 1;
        for(int i = 0 ; i < n ; i++){
            if(s[i] != s2[i]){
               flag = 0;
               break;
            }
        }
        flag == 1? cout << "Matched" << endl : cout << "Not Matched" << endl;
        break;
    case 4:
        cout << "Enter the string to be inserted" << endl;
        cin >> s2;
        cout << "Enter position" << endl;
        int pos;
        cin >> pos;
        n = length(s2);
        char s3[N];
        for(int i = 0 ; i < pos; i++){
            s3[i] = s[i];
        }
        j = 0;
        for(int i = pos ; i < pos + n; i++){
            s3[i] = s2[j];
            j++;
        }
        j = pos;
        for(int i = pos+n ; i < m + n; i++){
            s3[i] = s[j];
            j++;
        }
        s[m+n] = '\0';
        cout << s3 << endl;

    case 5:
        cout << "Enter the starting and the ending positions of the substring to be deleted" << endl;
        cin >> start >> end;
        for(int i = 0 ; i < m ; i++){
            if(i >= start && i <= end){
                continue;
            }
            cout << s[i];
        }
    }
}
