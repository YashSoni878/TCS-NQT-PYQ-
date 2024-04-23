// Finding factorial of a number without multiplication and division
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cout << "Enter a number : ";
    cin>>n;
    cout << "The factorial is :";
    
    int ans = n;
    for(int i=n-1;i>0;i--){
        int sum = 0;
        for(int j=0;j<i;j++){
            sum += ans;
        }
        ans = sum;
    }
    
    cout << ans;
    return 0;
}