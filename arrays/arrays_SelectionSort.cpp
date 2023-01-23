/*Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that selection sorts the array. Print the elements of sorted array.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.Sort the array using Selection Sort and print that Array.

Input Format
Constraints
N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000.

Output Format
Sample Input
4
2
-18
45
30
Sample Output
-18
2
30
45
Explanation
Write selection sort to sort the given integers in the problem.*/
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for(i = 0; i < n-1; i++) {
        minIndex = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    selectionSort(arr, N);
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
		cout<<endl;
    }
	
    return 0;
}
