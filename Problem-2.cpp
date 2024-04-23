// WAP to calculate the pairs count in the given array such that the sum of the pairs is divisible by 2.
// Input: [2, 2, 1, 7, 5, 3], Output: 7
// Explaination: pairs (2, 2), (1, 7), (1, 5), (1, 3), (7, 5), (7, 3), (5, 3)


// This is a bruteforce solution without covering the edge cases
#include <bits/stdc++.h>
using namespace std;

int countPairs(int arr[], int n){
    int count = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a = arr[i];
            int b = arr[j];
            int sum = a + b;
            if(sum % 2 == 0){
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout << "Enter elements in the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = countPairs(arr, n);
    cout << ans << endl;
    return 0;
}

// Suppose we are having multiple duplicates in the array = [2, 2, 2, 2, 1, 7, 5, 3]
// according to our bruteforce code the output will be 12 but the actual answer will be 7 because there will be duplicate pairs available.

// Optimal code
int countPairs(int arr[], int n){
    int count = 0;
    map<pair<int, int>, bool> mp;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a = arr[i];
            int b = arr[j];
            int sum = a + b;
            pair<int, int> p = make_pair(a, b);
            if(sum % 2 == 0 && mp[p] != true){
                count++;
                mp[p] = true;
            }
        }
    }
    
    return count;
}