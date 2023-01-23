#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a==0){
		return b;
	}if(b==0){
		return a;
	}if(a>b){
	return	gcd(a%b,b);
	}else{
	return	gcd(a,b%a);
	}
}
int main() {
	int n1,n2;
	cin >> n1;
	cout << endl;
	cin >> n2;
	cout << gcd(n1,n2);
return 0;
	
}
