#include <bits/stdc++.h>
using namespace std;
int frog(vector<int>&dp, int arr[], int index){
    if(index == 0) return dp[index] = 0;
    if(dp[index] != -1) return dp[index];
    int left = frog(dp,arr,index - 1) + abs(arr[index] - arr[index - 1]); 
    int right = INT_MAX;
    if (index > 1) right = frog(dp, arr,index - 2) + abs(arr[index] - arr[index - 2]);
    return dp[index] = min(left, right);
}
int main(){
    int n = 6;
    int arr[n] = {30, 10, 60, 10, 60, 50};
    vector<int>dp(n + 1, -1);
    cout << "Minimum energy required by frog is : " << frog(dp, arr, n - 1) << endl; 
    cout << "DP array is : ";
    for(auto it : dp){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}