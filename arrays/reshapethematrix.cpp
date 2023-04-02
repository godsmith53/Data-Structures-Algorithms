/*
In MATLAB, there is a handy function called reshape which can reshape an M × N matrix into a new one with a different size R × C keeping its original data. You are given an M × N matrix MAT and two integers R and C representing the number of rows and the number of columns of the wanted reshaped matrix. The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
NOTE: If the reshape isn’t possible print the original matrix.

Input Format
First line contains two integers M and N.
Next M lines contain N space separated integers.
Last line contains two integers R and C.

Constraints
1 <= M, N <= 100
1 <= R, C <= 300
|MATij| <= 103

Output Format
Print each row on a new line with the values separated by a space.

Sample Input
2 2
1 2
3 4
1 4
Sample Output
1 2 3 4
Explanation
The values of MAT are traversed row-wise, i.e. end of one row takes us to the start of next.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, r, c;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cin >> r >> c;
    int k = m * n;
    if (r * c != k) {
        // Reshape not possible
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        // Reshape possible
        vector<vector<int>> newMat(r, vector<int>(c));
        for (int i = 0; i < k; i++) {
            newMat[i / c][i % c] = mat[i / n][i % n];
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << newMat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
