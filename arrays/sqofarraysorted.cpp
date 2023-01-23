/*Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Input Format
First line of input contains an integer n representing the length of array n. Next line contains n array elements.

*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[n];
    int sq=0;
    for(int i=0;i<n;i++){
        temp[i]=(arr[i]*arr[i]);
    }
    
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(temp[j]>temp[j+1]){
            swap(temp[j],temp[j+1]);
        }
    }
    }
for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";

}
return 0;
}
