/*
Dima has been assigned the task of arranging the books as per their identification number (an integer) on a shelf. She is very exhausted, so she asks one of her friends for help. Being polite she will only ask him to sort the shortest part (continuous) of the shelf such that if he only sorts all the books in that part, the whole shelf is sorted.
You are given an array A, of size N, where each element denotes the ID of the book on the shelf at that position. Find the minimum length of the shelf that Dima would ask his friend to sort to complete her task.

Input Format
First line contains an integer N.
Second line contains N space-separated integers.

Constraints
1 <= N <= 105
|Ai| <= 109

Output Format
Single Integer, denoting the length of the shelf that needs sorting.

Sample Input
6
2 4 3 8 7 9
Sample Output
4
Explanation
If only the books from 2nd to 4th position are sorted, all the books would be sorted
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int left = -1, right = -1;
    
    // Find the first and last positions where the array is not sorted
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            left = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (a[i] < a[i - 1]) {
            right = i;
            break;
        }
    }
    
    // If the array is already sorted, output 0
    if (left == -1 && right == -1) {
        cout << 0 << endl;
        return 0;
    }
    
    // Find the minimum and maximum values in the unsorted part of the array
    int min_val = *min_element(a.begin() + left, a.begin() + right + 1);
    int max_val = *max_element(a.begin() + left, a.begin() + right + 1);
    
    // Find the left and right bounds of the shortest subarray that needs to be sorted
    int new_left = left, new_right = right;
    for (int i = left - 1; i >= 0; i--) {
        if (a[i] > min_val) {
            new_left = i;
        } else {
            break;
        }
    }
    for (int i = right + 1; i < n; i++) {
        if (a[i] < max_val) {
            new_right = i;
        } else {
            break;
        }
    }
    
    // Output the length of the shortest subarray that needs to be sorted
    cout << new_right - new_left + 1 << endl;
    
    return 0;
}
