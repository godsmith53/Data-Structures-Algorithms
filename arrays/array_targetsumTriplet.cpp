/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.

Input Format
First line contains input N.
Next line contains N space separated integers denoting the elements of the array.
The third line contains a single integer T denoting the target element.

Constraints
Length of Array should be between 1 and 1000.

Output Format
Print all the triplet present in the array in a new line each. The triplets must be printed as A, B and C where A,B and C are the elements of the triplet ( A<=B<=C) and all triplets must be printed in sorted order. Print only unique triplets.

Sample Input
9
5 7 9 1 2 4 6 8 3
10
Sample Output
1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n; vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int target; cin>>target;
	sort(arr.begin(), arr.end());
	for(int i=0; i<n; i++)
	{
		int temp = target - arr[i];
		int start = i+1;
		int end = n-1;
		while(start<end)
		{
			if(arr[start] + arr[end] > temp)
				end--;
			else if(arr[start]+arr[end] < temp)
				start++;
			else
			{
				cout<< arr[i] << ", " << arr[start] << " and " << arr[end] << endl;
				start++;
				end--;
			}
		}
	}
	return 0;
}