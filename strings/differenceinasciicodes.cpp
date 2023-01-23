//Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int n;

getline(cin,s);

	n=s.size();// string length
	 
	int l=0;//two variables
	int r=1;
	cout<<s[l];//print first letter 
	for(int i=0;i<n-1;i++){

		int k=s[r]-s[l];
		cout<<k;
		cout<<s[r]; //next letter print
		
		l=r;//we will increment the letters by 1 .
		r=l+1;//r is being incremented by 1 .
		
		}//n-1 times till length of String

		
		return 0;
}
