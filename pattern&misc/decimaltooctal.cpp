/*Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers*/
#include <iostream>
using namespace std;

int main() {
    int decimal, remainder, octal = 0, place = 1;

    // take input
    cin >> decimal;

    // convert decimal to octal
    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * place;
        decimal /= 8;
        place *= 10;
    }

    // output the octal number
    cout << octal << endl;
    return 0;
}
