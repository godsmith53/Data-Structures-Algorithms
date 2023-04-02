/*You have a given sorted array of length N consisting of unique elements. Now your teacher rotates it for K times. Notice that rotating an array [a[0], a[1], a[2], …, a[n-1]] 3 times results in the array [a[n-3],a[n-2],a[n-1], a[0], a[1], a[2], …, a[n-4]].
For example, an array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated K=4 times.
[0,1,2,4,5,6,7] if it was rotated K=0 times.
[7,0,1,2,4,5,6] if it was rotated K=8 times
You have this rotated sorted array now.Find the minimum element of this array.You must write an algorithm that runs in O(log n) time.
Input Format
Take an input N(size of array).
Next line takes N elements.

Constraints
1<=N<=10^10

-10^10<= arr[i] <=10^10
All the integers of arr are unique

Output Format
Find the minimum element in this array.

Sample Input
5 
4 5 0 1 2
Sample Output
0
Explanation
Minimum element be 0.*/
#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < nums[right]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return nums[left];
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int minElement = findMin(nums);
    cout << minElement << endl;
    return 0;
}
