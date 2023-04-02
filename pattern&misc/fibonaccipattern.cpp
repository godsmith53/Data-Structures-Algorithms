/*Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34
Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a = 0, b = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a << "\t";
            int c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}
