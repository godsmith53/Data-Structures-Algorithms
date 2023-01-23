#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n], new1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
            sum=sum+arr[i];
            new1[i]=sum;
        }

    
     for(int i=0;i<n;i++){
    cout<<new1[i]<<" ";

     }
     cout<<endl;
     return 0;
}