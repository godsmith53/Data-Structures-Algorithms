/*Monu Bhaiya is hosting a party. He invites N of his/her students to his house and pairs them up. Each of his students has some Perance, representing his/her performance at Coding Blocks.

The charm of his party is represented by the sum of minimum Perance from each pair in the party. You are given an array A, of N elements, where Ai is the Perance of a student at his party.
Help him get the maximum charm for his party and output it.
Given: N is even.

Input Format
First line contains an integer N.
Second line contains N space-separated integers, representing the Perance of a student.

Constraints
1 <= N <= 104
|Ai| <= 104

Output Format
Single Integer representing the maximum possible charm.

Sample Input
4
1 3 4 2
Sample Output
4
Explanation
Possible pairings are:
(1,3),(4,2) -> min(1,3) + min(4,2) = 1+2 = 3
(1,4),(3,2) -> min(1,4) + min(3,2) = 1+2 = 3
(1,2),(4,3) -> min(1,2) + min(4,3) = 1+3 = 4
(Ordering of the pairs doesn’t matter)*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int charm = 0;
    for(int i=0; i<n-1; i+=2) {
        charm += min(a[i], a[i+1]);
    }
    cout << charm << endl;
    return 0;
}
