/*We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 2 2 3 3 4 
Sample Output
4
Explanation
4 is present only once
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    int unique_num = 0;
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
        unique_num ^= arr[i];//XOR each number with "unique_num"
    }

    cout << unique_num << endl;//after all the numbers have been XORed together, the final value of "unique_num" will be the unique number that was present only once in the array
//The XOR operation will cancel out the duplicate numbers and only the unique number will be left.
    return 0;
}
