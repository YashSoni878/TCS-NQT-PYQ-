Calculate the sum of elements of N terms in Fibonacci Series

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // base case
    if(n == 1){
        cout << 0;
    }
    if(n == 2){
        cout << 1;
    }
    
    int prev = 0;
    int curr = 1;
    int sum = prev + curr;
   
    for(int i=3;i<=n;i++){
        int temp = prev + curr;
        sum += temp;
        prev = curr;
        curr = temp;
    }

    cout << sum;

    return 0;
}


// Recursive Code to find fibonacci nth fibonacci number
int fib(int n){
    // Base Case
    if(n <= 1) return n;

    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout << fib(n);

    return 0;
}