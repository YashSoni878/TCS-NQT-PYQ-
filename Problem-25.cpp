Finding maximum in a window of k size

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<=n-k;i++){
        int maxi = arr[i];
        for(int j=i;j<i+k;j++){
            maxi = max(maxi, arr[j]);
        }
        cout << maxi << " ";
    }
    
    return 0;
}