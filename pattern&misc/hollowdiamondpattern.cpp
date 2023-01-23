/*Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
*	*	*       *      *		  
*	*	        *      *
* 	                       *
* 	*               *      *
* 	*	*       *      *	
Explanation
Each '*' is separated from other by a tab.

*/
// Pattern Hollow Daimond.cpp
#include<iostream>
using namespace std;
int main(){
	int n; /// take from user
	cin>>n;
	// upper half
	for(int i=0;i<=n/2;i++){
		//stars (this is top left part)
		int j=0;
		while(j<=n/2-i){
			cout<<"* ";
			j++;
		}

		//spaces
		j=0;
		while(j<2*i-1){
			cout<<"  ";
			j++;
		}

		//stars
		j=0;
		while(j<=n/2-i){
			if(i==0&&j==0); // this is done to stop printing one extra star at first line
			else cout<<"* ";
			j++;
		}
		cout<<endl;
	}
	
	// similarly lower half in reverse order
	for(int i=n/2-1;i>=0;i--){
		//stars (this is top left part)
		int j=0;
		while(j<=n/2-i){
			cout<<"* ";
			j++;
		}

		//spaces
		j=0;
		while(j<2*i-1){
			cout<<"  ";
			j++;
		}

		//stars
		j=0;
		while(j<=n/2-i){
			if(i==0&&j==0); // this is done to stop printing one extra star at first line
			else cout<<"* ";
			j++;
		}
		cout<<endl;
	}

	return 0;
}