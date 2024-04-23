// Given two sorted arrays arr1 and arr2 of size n and m. Find the union of two sorted arrays.
// NOTE: Elements in the union should be in ascending order.

// Example-1:
// Input: n = 5, m = 3
// arr1 = [1, 2, 3, 4, 6]
// arr2 = [2, 3, 5]
// Output: [1, 2, 3, 4, 5, 6]


#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> &arr1, vector<int> &arr2){
    set<int> s;
    
    for(int i=0;i<arr1.size();i++){
        s.insert(arr1[i]);
    }
    
    for(int i=0;i<arr2.size();i++){
        s.insert(arr2[i]);
    }
    
    vector<int> ans;
    for(auto it: s){
        ans.push_back(it);
    }
    
    return ans;
    
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 6};
    vector<int> arr2 = {1, 3, 5};
    vector<int> ans = fun(arr1, arr2);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}