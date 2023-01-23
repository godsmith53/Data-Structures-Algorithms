/*Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
Explanation
Each number is separated from other by a tab.

*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {//loop for 1 to N rows
        for(int j = 1; j <= N-i; j++) {//loop for giving space after every row
            cout << "  ";
        }
        for(int j = i; j <= 2*i-1; j++) {//inner loop for printing  numbers first straight
            cout << j << " ";
        }
        for(int j = 2*i-2; j >= i; j--) {//reverse of above loop
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
