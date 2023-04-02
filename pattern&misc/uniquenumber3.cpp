/*We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3
Sample Output
3
Explanation
3 is present only once*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ones = 0, twos = 0, common_bits;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        twos |= (ones & num); // set bits in twos where bits are set in ones and also in num
        ones ^= num; // xor to count number of 1's at each bit position
        common_bits = ~(ones & twos); // bits that are set in both ones and twos
        ones &= common_bits; // clear the bits that are set in both ones and twos
        twos &= common_bits;
    }
    cout << ones << endl;
    return 0;
}
