/*Given an array nums with n books of subject Physics, Chemistry, Mathematics, sort them in-place so that books of the same subject are adjacent, with the subject in the order Physics, Chemistry, and Mathematics.
We will use the char P, C,M to represent the subject Physics, Chemistry, and Mathematics, respectively.
Try to solve in O(1) space complexity.

Input Format
First Line takes integer N(size of array).
Next line takes N char as input.

Constraints
1<=N<=10^5
arr[i] is char either P, C or M.

Output Format
Sort them in-place so that books of the same subject are adjacent, with the subject in the order Physics, Chemistry, and Mathematics.

Sample Input
7
P M C C P M C
Sample Output
P P C C C M M*/
#include <bits/stdc++.h>
using namespace std;

void sortBooks(vector<char>& nums) {
    int n = nums.size();
    int p = 0, m = n - 1;
    
    for (int i = 0; i <= m; i++) {
        if (nums[i] == 'P') {
            swap(nums[i], nums[p]);
            p++;
        }
        else if (nums[i] == 'M') {
            swap(nums[i], nums[m]);
            m--;
            i--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<char> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    sortBooks(nums);
    
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
