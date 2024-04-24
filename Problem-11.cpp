// Find the missing number in the array


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum1 = accumulate(arr, arr+n, 0);
    
    int sum2 = 0;
    for(int i=1;i<=n;i++){
        sum2 += i;
    }
    
    cout << sum2 - sum1;

    return 0;
}