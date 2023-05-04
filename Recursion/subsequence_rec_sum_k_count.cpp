// count the number of subsequences where the sum of elemenst of subsequence is k
/*
Basic structure of function :
int f(){
    base case:
        return 1 -> condition satisfied
        return 0 -> condition not satisfied
    
    l = f();
    r = f();
    return l + r;
}
*/
#include <bits/stdc++.h>
using namespace std;
int subs_k_count(int arr[], int n, int index, int sum, int s){
  if(index == n){
    // condition satisfied;
    if(sum == s) return 1;
    // condition not satisfied
    return 0;
  }
  // we do not need a data structure to push into..
  s += arr[index];
  int l = subs_k_count(arr, n, index + 1, sum, s);
  s-= arr[index];
  int r = subs_k_count(arr, n, index + 1, sum, s);
  return l + r;   
}
int main(){
    // counting subsequences for [1, 2, 1] having sum = 2
    cout << "Counting number of subsequences in array [1, 2, 1] having sum = 2" << endl;
    int arr[] = {1, 2, 1};
    cout << "Number of subsequences having sum 2 is : " << subs_k_count(arr, 3, 0, 2, 0) << endl;
}