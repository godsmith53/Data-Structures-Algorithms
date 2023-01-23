/*Take as input N, a number. Take N more inputs to form an array. The array contains only 0 and 1. Sort the array in a single scan.

Input Format
Enter the size of the array N and input N more numbers and store in the array

Constraints
Output Format
Display the sorted array

Sample Input
5
1
1
1
0
0
Sample Output
0 0 1 1 1 */
#include <bits/stdc++.h>
using namespace std;
void segregating0sand1s(int arr[], int n)
{
	int count = 0; 
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) // to counts the no of zeros in arr
			count++;
	}

	for (int i = 0; i < count; i++)
		arr[i] = 0; // loop to fill the arr with 0 until count
	for (int i = count; i < n; i++)
		arr[i] = 1; // loop to fill remaining arr space with 1
}

void print(int arr[], int n)
{
	
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver function
int main()
{
	int arrsize;
	cin >> arrsize;
	int arr[arrsize];
	for (int i=0;i<arrsize;i++){
		cin>>arr[i];
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	segregating0sand1s(arr, n);
	print(arr, n);
	return 0;
}