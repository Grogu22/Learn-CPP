#include <bits/stdc++.h>
using namespace std;
void subs_k(vector<int> &container, int arr[], int index, int n, int sum, int s){
    if(index == n){
        if (sum == s){
            for(auto it : container) cout << it << " ";
            cout << endl;
            // we are not considering size 0 here obv..
            return;
        }
    }else{
        // parsing left side of tree, so we will include element at current index
        // we return if cumulative summation of all elements in subsequence till current index
        // equals 'sum'
        container.push_back(arr[index]);
        // adding value of current index to s
        s += arr[index];
        subs_k(container, arr, index + 1, n, sum, s);
        // after parsing the left half of recursion tree we will now parse the right half
        // we have to remove the value at cureent index from container and also subtract
        // it from the cumulative summation
        container.pop_back();
        s -= arr[index];
        subs_k(container, arr, index + 1, n, sum , s); 
    }
}
int main(){
    // doing it for array [1, 2, 1]
    int arr1[] = {1, 2, 1};
    vector<int> container;
    cout << "For array [1, 2, 1] and having sum = 2 :" << endl;
    subs_k(container, arr1, 0, 3, 2, 0);
    // doing it for array [1, 2, 3]
    int arr2[] = {1, 2, 3};
    cout << "For array [1, 2, 3] and having sum = 3 :" << endl;
    subs_k(container, arr2, 0, 3, 3, 0);
    return 0;
}