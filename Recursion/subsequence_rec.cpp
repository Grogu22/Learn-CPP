#include <bits/stdc++.h>
using namespace std;
void subs(vector<int> &container,int arr[], int n, int index){
    if(index == n){
        for(auto it : container) cout << it << " ";
        if(container.size() == 0) cout << "[]";
        cout << endl;
        return; 
    }
    else{
        // parsing the left recursion tree where we choose to include the element at the current index
        container.push_back(arr[index]);
        subs(container, arr, n, index + 1);
        // after parsing the left part of recursion tree we have to remove the element we considered
        // so that we can parse the right side of the recursion tree where we DO NOT consider that element 
        container.pop_back();
        subs(container, arr, n, index + 1);
    }
}
int main(){
    // we are doing it for the array [1, 2, 3]
    int arr1[] = {1, 2, 3};
    vector<int> container;
    cout << "For [1, 2, 3]" << endl;
    subs(container, arr1, 3, 0);
    // doing it for array [1, 2]
    int arr2[] = {1, 2};
    cout << "For array [1, 2]" << endl;
    subs(container, arr2, 2, 0);
    return 0;
}