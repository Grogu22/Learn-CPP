/*
Tabulation is a bottom up approach
for calculating Fibonacci we have to first consider the base cases, 
after that we can calculate the advanced cases
In this program, we do not take an extra dp[n] array,
We use the following approach :
prev2 = 0, prev = 1
for i in range(2, n):
    fib = prev2 + prev
    prev2, prev = prev, fib
So, SC = O(1) and TC = O(n)
*/
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    int prev2 = 0, prev = 1, fib;
    for(int i=2; i < n; i++){
        fib = prev2 + prev;
        prev2 = prev, prev = fib;
    }
    return fib;
}
int main(){
    // finding fibo(5);
    int n = 5;
    cout << "fib(5) = " << fib(n) << endl;
}