/*Take as input N, the size of an array. Take N more inputs and store that in an array. Take another number’s input as M. Write a function which returns the index on which M is found in an array, in case M is not found -1 is returned. Print the value returned.

It reads a number N.
2.Take Another N numbers as an input and store them in an Array.
Take another number M as an input.
If M is found in the Array the index of M is returned else -1 is returned and print the value returned.
Input Format
Constraints
N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000. M can be between -1000000000 to 1000000000.

Output Format
Sample Input
5
2
4
6
9
17
17
Sample Output
4
Explanation
Given array = {2, 4, 6, 9, 17}. Target number = 17. Index = 4.*/
#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    if(N > 0){
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }

        int M;
        cin>>M;
        bool flag = false;
        for(int i=0;i<N;i++){
            if(a[i] == M){
                flag = true;
                cout<<i<<endl;
                break;
            }
        }
        if(flag == false){
            cout<<"-1"<<endl;
        }
    }
}
