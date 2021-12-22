#include <iostream>
using namespace std;

#define MAX_SIZE 100

class spm {
   public:
    int row, col, val;

    void set(int r, int c, int v) {
        row = r;
        col = c;
        val = v;
    }

    void fast_transpose(spm a[], spm b[]) {
        int r = a[0].row, c = a[0].col, v = a[0].val;
        int total[c] = {0};
        int index[c + 1], col_no;
        b[0].set(a[0].col, a[0].row, a[0].val);

        for (int i = 1; i <= v; i++) {
            col_no = a[i].col;
            total[col_no]++; 
        }
        index[0] = 1;

        for (int i = 1; i <= c; i++) {
            index[i] = index[i - 1] + total[i - 1];
        }

        for (int i = 1; i <= v; i++) {
            col_no = a[i].col;
            int loc = index[col_no];
            b[loc].set(a[i].col, a[i].row, a[i].val);
            index[col_no]++;
        }
    }

    void display() {
        cout << row << ' ' << col << ' ' << val << " " << endl;
    }
};

int main() {
    spm a[MAX_SIZE];

    int m, n;
    cout << "Enter the no of rows and columns" << endl;
    cin >> m >> n;
    int mat[m][n];
    a[0].set(m, n, -1);
    int cnt = 0, k = 0;
    cout << "Enter the elements in the matrix" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (mat[i][j] != 0) {
                a[++cnt].set(i, j, mat[i][j]);
            }
        }
    }

    a[0].val = cnt;

    cout << "Matrix before Transposing" << endl;

    for (int i = 0; k <= cnt; k++) {
        a[k].display();
    }
    spm b[cnt + 1], temp;

    cout << "Matrix after Transposing" << endl;

    temp.fast_transpose(a, b);
    for (int k = 0; k <= cnt; k++) {
        b[k].display();
    }
}
