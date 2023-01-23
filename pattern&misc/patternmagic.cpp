#include<iostream>
using namespace std;
int main() {
	int n;

cin>>n;

for(int i=0;i<n;i++){

    for(int j=i;j<n;j++){

        cout<<'*';

    }

    for(int k=1;k<=(2*i)-1;k++){

        cout<<' ';

    }

    if(i==0){

        for(int j=i;j<n-1;j++){ 

         cout<<'*';

        }

    }

    else{

        for(int j=i;j<n;j++){   

         cout<<'*';

        }

    }

    cout<<endl;

}

for(int i=n-2;i>=0;i--){

    for(int j=i;j<n;j++){

        cout<<'*';

    }

    for(int k=1;k<=(2*i)-1;k++){

        cout<<' ';

    }

    if(i==0){

        for(int j=i;j<n-1;j++){ 

         cout<<'*';

        }

    }

    else{

        for(int j=i;j<n;j++){   

         cout<<'*';

        }

    }

    cout<<endl;

}


	return 0;
}