/*Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 
Input Format
Take N as input.

Constraints
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1
             */
// Pattern_Double_Sided_Arrow.cpp
#include<iostream>
using namespace std;
int main() {
	int n ;
	cin>>n;

	for (int i = 0; i < n / 2; i++) {
		/// Spaces (n-2*i)
		for (int j = 1; j < n - 2 * i; j++)
			cout << "  ";

		// print numbers from i+1 to 1 (dec)
		for (int j = i + 1; j > 0; j--)
			cout << j << " ";

		// print spaces 2*i-1
		for (int j = 0; j < 2 * i - 1; j++)
			cout << "  ";

		// print numbers from 1 to i+1 (make sure that if i=0 then don't print 1)
		for (int j = 1; i && j <= i + 1; j++)
			cout << j << " ";

		cout << endl;
	}
	// repeat same process in reverse
	for (int i = n / 2; i >= 0; i--) {
		/// Spaces (n-2*i)
		for (int j = 1; j < n - 2 * i; j++)
			cout << "  ";

		// print numbers from i+1 to 1 (dec)
		for (int j = i + 1; j > 0; j--)
			cout << j << " ";

		// print spaces 2*i-1
		for (int j = 0; j < 2 * i - 1; j++)
			cout << "  ";

		// print numbers from 1 to i+1 (make sure that if i=0 then don't print 1)
		for (int j = 1; i && j <= i + 1; j++)
			cout << j << " ";

		cout << endl;
	}
return 0;
}