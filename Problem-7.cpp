// Given a number N. Your mission is to find the largest and the smallest digit of the number.

// NOTE: Print the largest and smallest digit.

// Example-1:
// Input: 169
// Output: [9, 1]

// Example-2:
// Input: 3287
// Output: [8, 2]

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int num = n;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    
    while(num != 0){
        int digit = num % 10;
        smallest = min(smallest, digit);
        largest = max(largest, digit);
        num /= 10;
    }
    
    vector<int> ans;
    ans.push_back(largest);
    ans.push_back(smallest);
    
    for(int i=0;i<2;i++){
        cout << ans[i] << " ";
    }
    return 0;
}