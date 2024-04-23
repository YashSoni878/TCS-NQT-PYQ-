// Given a 2D array of n x m consisting of only 1's and 0's. Your mission is to find the row number consisting maximum number of 1's.

// NOTE: Find the 0 based index of the first row that has the maximum number of 1's. If grid consists only zeros then return -1.

// Example-1:
// Input:
// N = 4, M = 4
// arr[][] = [[0, 1, 1, 1],
//            [0, 1, 0, 1],
//            [0, 0, 0, 0],
//            [1, 1, 1, 1]]
// Output: 3


#include <bits/stdc++.h>
using namespace std;

int fun(vector<vector<int>> arr, int n, int m){
    int ans = -1;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<m;j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count != 0 && count > maxi){
            ans = i;
            maxi = count;
        }
    }
    
    return ans;
}

int main() {
    int n = 4;
    int m = 4;
    vector<vector<int>> arr = {{0, 1, 1, 1}, 
                               {0, 1, 0, 1}, 
                               {0, 0, 0, 0}, 
                               {1, 1, 1, 1}};
    
    cout << "output: " << fun(arr, n, m);
    return 0;
}