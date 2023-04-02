/*Monu’s Maths Teacher at school gave him some numbers today and she promised him a treat if he could find the greatest product that he can make using any three of those numbers. He is very weak in his studies and is really bad with numbers, help him find the answer if the numbers are given as an array A, of size N.

Input Format
First line contains an integer N.
Second line contains N space-separated integers.

Constraints
3 <= N <= 105
|Ai| <= 103

Output Format
Single Integer, denoting the maximum product.

Sample Input
5
1 2 3 4 5
Sample Output
60
Explanation
The max product is given by 3, 4 and 5, which is 60*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    sort(nums.begin(), nums.end());
    
    int product1 = nums[n-1] * nums[n-2] * nums[n-3];
    int product2 = nums[0] * nums[1] * nums[n-1];
    
    cout << max(product1, product2) << endl;
    
    return 0;
}
