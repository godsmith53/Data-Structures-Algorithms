/*
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.*/
#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0;
    int base = 1;

    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * base;
        base *= 2;
        n /= 10;
    }

    return decimal;
}

int main() {
    int n;
    cin >> n;

    int decimal = binaryToDecimal(n);

    cout << decimal << endl;

    return 0;
}
