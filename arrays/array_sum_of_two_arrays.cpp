#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	int a[1005];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int b[1005];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int arr[1000];
	int x = m>n?m:n;
	int t = x;
    vector<int>v;
	int c=0;
	while(n>=0 and m>=0){
		int sum = a[n-1]+b[m-1]+c;
		if(sum){v.push_back(sum%10 );}
		c = sum/10;
		n--;
		m--;
		x--;
	}
    if(c){
        v.push_back(c);
    }
    reverse(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
	cout<<"END";
	return 0;
}