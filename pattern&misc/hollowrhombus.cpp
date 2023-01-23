// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cin >> n;
   int temp =n;
   
   while(temp >0)
  {
      
      for(int i=1;i<=n;i++){
        for(int k=1;k<temp;k++)
      {
          cout<<" ";
      }
      temp--;
       for(int j=1;j<=n;j++){
           if((i==1||i==n)||(j==1||j==n)){
               
               cout <<"*";
           }else{
               cout<<" ";
           }
       }
      
       
      
      cout<<endl;
      
   
   
  }
  
  cout<<endl;
  
  
  }
    return 0;

}
