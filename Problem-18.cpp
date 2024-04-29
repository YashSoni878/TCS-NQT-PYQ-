Problem Statement:

Given a grid of size n*m, let us assume you are starting at (1, 1) and your goal is to reach (n,m).
At any instance, if you are on (x, y), you can either go to (x, y + 1) or (x + 1, y).

Now consider if some obstacles are added to the grids. How many unique paths would there be? 
An obstacle and space are marked as 1 and 0 respectively in the grid.

Sample test case:
Input: n = 3, m = 3
arr = [
    [0, 0, 0],
    [0, 1, 0],
    [0, 0, 0]
]

Output: 2

#include <bits/stdc++.h>

using namespace std;

int fun(int ** arr, int n, int m, int i, int j){
    // Base case
    if(i == n-1 && j == m-1){ // to check if we reached the destination
        return 1;
    }
    
    if(i >= n || j >= m || arr[i][j] == 1){  // to check if we move outside of matrix and also if there is any obstacle
        return 0;
    }
    
    return fun(arr, n, m, i+1, j) + fun(arr, n, m, i, j+1);
}

int main() {
    int n, m;
    cin>>n>>m;
    
    int **arr = new int *[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    int i = 0;
    int j = 0;
    
    int ans = fun(arr, n, m, i, j);
    cout << ans;
    return 0;
}