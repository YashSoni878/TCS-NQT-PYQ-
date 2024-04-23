// You are given two strings s1 and s2, your mission is to calculate the sum of the character occurrences of the s2 string in string s1.

// Example-1:
// Input:
// s1 = "helloworld", s2 = "do"
// Output: 3

// Example-2:
// Input:
// s1 = "developer", s2 = "dev"
// Output: 5



#include <bits/stdc++.h>
using namespace std;

int fun(string &s1, string &s2){
    int sum = 0;
    unordered_map<char, int> mp;
    
    for(int i=0;i<s1.size();i++){
        mp[s1[i]]++;
    }
    
    for(int i=0;i<s2.size();i++){
        sum += mp[s2[i]];
    }
    
    return sum;
}

int main() {
    string s1, s2;
    cin>>s1>>s2;
    
    int ans = fun(s1, s2);
    cout << ans <<endl;
    return 0;
}