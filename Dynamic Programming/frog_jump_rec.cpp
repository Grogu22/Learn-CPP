#include <bits/stdc++.h>
using namespace std;
int frog(vector<int> &heights, int index){
    if (index == 0) return 0;
    int left = frog(heights, index - 1) + abs(heights[index] - heights[index - 1]);
    int right = INT_MAX;
    if (index > 1) right = frog(heights, index - 2) + abs(heights[index] - heights[index - 2]);
    return min(left, right);
}
int main(){
    int n = 6;
    int arr[n] = {30, 10, 60, 10, 60, 50};
    vector<int> heights;
    for(auto it: arr) heights.push_back(it);
    cout << "Using recursion to predict the energy lost by frog on heights = [30, 10, 60, 10, 60, 50]" << endl;
    cout << frog(heights, n - 1) << endl;
    return 0;
}