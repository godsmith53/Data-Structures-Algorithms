/*
Sridharan is a chocolate lover. He went to the shop, there was an array of integers containing the number of chocolate in each index. Sri needs multiple of K chocolates. Shopkeeper agreed to give all subarrays which chocolates sum will be divided by K.
Find the total number of ways Sridharan can take chocolates.

Input Format
First Line contains input N(size of array) and K.
Second line contains N integers where each integer is the number of chocolates present in that index in the array.

Constraints
1<=N<=10^5
-10^5<=arr[i]<=10^5
2<=k<=10^4

Output Format
Print the total number of ways Sri can take chocolates. Note: arr[i]<0 means Sri has to give arr[i] chocolates to the shopkeeper.

Sample Input
6 5
4 5 0 -2 -3 1
Sample Output
7
Explanation
There are 7 subarrays with a sum divisible by k = 5:
[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int countSubarrays(int n, int k, int arr[]) {
    unordered_map<int, int> freq;
    int count = 0, prefix = 0;
    freq[0] = 1; // Initialize the frequency of remainder 0 as 1
    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        int remainder = (prefix % k + k) % k; // Calculate the remainder
        count += freq[remainder]; // Add the frequency of this remainder to the count
        freq[remainder]++; // Increment the frequency of this remainder
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << countSubarrays(n, k, arr) << endl;
    return 0;
}
