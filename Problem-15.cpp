Problem Statement: In the town of Arrayville, there were two friends named Alice and Bob. 
Alice liked arranging numbers into lists, and Bob was good at finding patterns in these lists.

One sunny day, Alice gave Bob two scrolls with lists of numbers: 
one was labeled arr1 and the other arr2. She asked Bob to figure out if arr2 was hidden inside 
arr1 as a continuous group of numbers.

Bob was curious about the challenge. He knew that a "subarray" meant a sequence of numbers that 
appear one after another within a list. For example, [2, 3, 4] is a subarray of [1, 2, 3, 4, 5].

Bob decided to write a special function called is_subarray(arr1, arr2) to help him solve this puzzle.

Bob's Task:
Complete is_subarray(arr1, arr2) function would take two lists of numbers:


#include<bits/stdc++.h>
using namespace std;

bool isSubarray(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    if(m > n) return false;

    for(int i=0;i<=n-m;i++){
        bool found = true;

        for(int j=0;j<n;j++){
            if(arr1[i+j] != arr2[j]){
                found = false
                break;
            }
        }

        if(found == true){
            return true;
        }
    }

    return false;
}

int main(){
    return 0;
}