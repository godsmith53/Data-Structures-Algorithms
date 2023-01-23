#include <iostream>
using namespace std;
int main() {
     int i,j,n,k=1;
     cin>>n;
     
      for(i=1;i<=n;i++)
     {    //each row will have
          //n-i+1 numbers;
          for(int j=1;j<=n-i+1;j++)
             cout<<j<<" ";
          // 2*i-3 stars
          for(int j=1;j<=2*i-3;j++)
           cout<<"* ";   

           cout<<"\n";
     }
    return 0;
}
