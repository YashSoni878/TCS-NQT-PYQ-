// You are playing a game in which you have to find the good number. A number is a good number if the number is divisible by the sum of its digits.

// NOTE: Print "Good Number" if number is a good number else print "Bad Number".

// Example-1:
// Input: num = 3
// Output: "Good Number"

// Example-2:
// Input: num = 27
// Output: "Good Number"

// Example-3:
// Input: num = 16
// Output: "Bad Number"


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int num = n;
    int sum = 0;
    while(num != 0){
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    if(n % sum == 0){
        cout << "Good Number" <<endl;
    }
    else{
        cout << "Bad Number" << endl;
    }
    return 0;
}