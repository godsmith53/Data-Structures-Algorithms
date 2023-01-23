/*
Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Input Format
There will be an integer in input.

Constraints
0 < N < 100

Output Format
Print the pattern.

Sample Input
5
Sample Output
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5
Explanation
Each number is separated from other by a tab.If row number is n (>1), total character is n. First and last character is n and rest are 0.*/
#include<iostream>

using namespace std;

int main()
{
     int n,i,j;
     cin>>n;

     for(i=1;i<=n;i++)
     {
          if(i==1)
               cout<<i;
          else
          {
               cout<<i<<"\t";
               for(j=1;j<=i-2;j++)
                    cout<<"0\t";
               cout<<i;
          }
          cout<<"\n";
     }
}