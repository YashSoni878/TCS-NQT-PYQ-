You are given a number, your task is to check the given number is 'Relative by blood' number or not.

NOTE: 'Relative by blood' numbers are the numbers whose sum of factorial of digits is equal to the 
original number. Print 1 if the Number is 'Relative by blood', else Print 0.

Example-1:
Input: N = 145
Output: 1

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp = n;

    int sum = 0;
    while(temp != 0){
        int digit = temp % 10;

        int fact = 1;
        for(int i=1;i<=digit;i++){
            fact = fact * i;
        }
        sum += fact;
        temp = temp / 10;
    }

    if(sum == n){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}