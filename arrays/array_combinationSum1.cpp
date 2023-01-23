/*Adarsh needs some target money. He asks all his N friends to contribute. Each friend has a distinct coin and he can contribute an unlimited number of that coin. Help Adarsh to find out how many unique ways he can collect coins from friends to achieve the target sum.
It is guaranteed that the number of unique combinations that sum up to target is less than 5550 combinations for the given input.

Input Format
First line contains integer N(no. of friends), target.
Second Line contains N distinct integers, representing the coin's value having each friend.

Constraints
1<=N<=30
1<=Coin’s value<=200
1<=target<=500

Output Format
Print total number of unique ways Adarsh can collect money from friends which sum up to target value.

Sample Input
4 7
2 3 6 7
Sample Output
2
Explanation
One way is Adarsh collected 2rs. Coin for two times from first friend and taking one time 3rs coin from second friend, So total sum equal to 2+2+3=7.
Second way is to collect 7rs from the fourth friend once,So total sum equals 7.
Hence there are two ways to collect coins from friends such that sum equals target in this testcase.*/
#include <iostream>
using namespace std;

int coin_combinations(int n, int target, int coin[]) {
    int dp[n+1][target+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= target; j++) {
            if (i == 0) {
                dp[i][j] = 0;
            }
            else if (j == 0) {
                dp[i][j] = 1;
            }
            else if (coin[i-1] > j) {
                dp[i][j] = dp[i-1][j];
            }
            else {
                dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]];
            }
        }
    }
    return dp[n][target];
}

int main() {
    int n, target;
    cin >> n >> target;
    int coin[n];
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    cout << coin_combinations(n, target, coin) << endl;
    return 0;
}
