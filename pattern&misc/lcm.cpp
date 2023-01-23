/*Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Input Format
Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000

Output Format
Sample Input
4 
6
Sample Output
12
Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.*/
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}
int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}
int main() {
    int N1, N2;
    cin >> N1 >> N2;
    cout << lcm(N1, N2);
    return 0;
}
