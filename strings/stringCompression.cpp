// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2ds.
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;

	for(int i=0;i<s.length();i++){
		char ch = s[i];
		int count=0;
		while(i<s.length() and s[i] == ch){
			count++;
			i++;
		}
		i--;
		if(count > 1)cout<<ch<<count;
		else cout<<ch;
	}
	return 0;
}