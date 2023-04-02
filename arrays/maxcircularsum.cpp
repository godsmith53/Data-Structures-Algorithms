/*You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

Input Format
First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

Constraints
1<=t<=100
1<=n<=1000
|Ai| <= 10000

Output Format
Print the maximum circular sum for each testcase in a new line.

Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22
Explanation
Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int n = arr.size();
    int max_sum = arr[0], cur_sum = arr[0];
    for (int i = 1; i < n; i++) {
        cur_sum = max(cur_sum + arr[i], arr[i]);
        max_sum = max(max_sum, cur_sum);
    }
    return max_sum;
}

int maxCircularSum(vector<int>& arr) {
    int n = arr.size();
    int max_straight_sum = maxSubarraySum(arr);
    if (max_straight_sum < 0) {
        return max_straight_sum;
    }
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular_sum = total_sum + maxSubarraySum(arr);
    return max(max_straight_sum, max_circular_sum);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << maxCircularSum(arr) << endl;
    }
    return 0;
}
