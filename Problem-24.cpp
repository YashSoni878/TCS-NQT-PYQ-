In a company there are employees and their efficiency is given in array 'arr'
(can be negative). You need to find the maximum efficiency of 3 employees.
Efficiency of 3 employees will be Calculated by multiplying their individual
efficiencies from the given array.

Example-1:
Input: 5
-3, -2, 7, 8, 1
Output: 56

Example-2:
Input: 5
3, -2, -8, 4, 1
Output: 64

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int pos1 = arr[n-1];
    int pos2 = arr[n-2];
    int pos3 = arr[n-3];

    int neg1 = arr[0];
    int neg2 = arr[1];

    int ans = max(neg1*neg2*pos1, pos1*pos2*pos3);

    cout << ans;

    return 0;
}