/*Take N (number of rows), print the following pattern (for N = 3).

                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
3
Sample Output
        1
	2	3	2
3	4	5	4	3
	2	3	2
		1
Explanation
Each number is separated from other by a tab.*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = i; j < N; j++)
            cout << "  ";
        for (int k = i; k <= 2*i-1; k++)
            cout << k << " ";
        
        for (int l = 2*i-2; l >= i; l--)
            cout << l << " ";
        
        cout << endl;
    }

    for (int i = N-1; i >= 1; i--) {
        for (int j = i; j < N; j++)
            cout << "  ";
        for (int k = i; k <= 2*i-1; k++)
            cout << k << " ";
        
        for (int l = 2*i-2; l >= i; l--)
            cout << l << " ";
        
        cout << endl;
    }

    return 0;
}
