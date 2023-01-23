/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int rows = 2 * n + 1;  // Number of rows

    int nst = 1;                 // initializing number of numbers in a row
    int nsp = 2 * n - 1;     // initializing number of spaces in a row 
    for (int row = 1; row <= rows; row++) {
        int val = n;

        //work for numbers
        for (int cst = 1; cst <= nst; cst++) {
            cout<<val<<" ";
            val--;
        }

        //work for spaces
            for (int csp = 1; csp <= nsp; csp++) {
            cout<<"  ";
        }

        int cst = 1;
        if (row == n + 1) {
            cst = 2;
            val += 2;
        } else {
            cst = 1;
            val++;
        }

        //work for numbers
        for (; cst <= nst; cst++) {
            cout<<val<<" ";
            val++;
        }


        //preparation for next row
        if (row <= n) {
            nsp -= 2;
            nst++;
        } else {
            nsp += 2;
            nst--;
        }
        cout<<endl;
    }
}
