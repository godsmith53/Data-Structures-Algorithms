/*We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
Explanation
Smaller number comes before larger number*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], xor_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        xor_sum ^= arr[i]; // xor of all numbers
    }
    int set_bit = xor_sum & ~(xor_sum - 1); // rightmost set bit
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & set_bit) { // rightmost set bit is set
            a ^= arr[i]; // first unique number
        }
        else { // rightmost set bit is not set
            b ^= arr[i]; // second unique number
        }
    }
    if (a < b) {
        cout << a << " " << b << endl;
    }
    else {
        cout << b << " " << a << endl;
    }
    return 0;
}
