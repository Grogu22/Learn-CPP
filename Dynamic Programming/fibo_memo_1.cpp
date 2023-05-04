/*
Steps for memoization :
0. declare dp[n+1]
1. dp[n] = f(n-1) + f(n-2)
2. if dp[n] != -1 return dp[n]
*/
#include <bits/stdc++.h>
using namespace std;
int fibo(vector<int> &dp, int n){
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(dp, n-1) + fibo(dp, n-2);
}
int main(){
    // finding fibo(5);
    int n = 5;
    vector<int> dp(n+1, -1);
    cout << "fibo(5) = " << fibo(dp, n) << endl;
}