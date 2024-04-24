Given two strings s1 and s2 of lowercase alphabets, find the list of uncommon characters for the two strings.

A character is uncommon if it is present only in one of the strings. It is either present in s1 or s2, but not in both.

NOTE:
1. Both the strings contain only lowercase alphabets and can contain duplicates.
2. Return the uncommon characters in sorted order and can not contain duplicates.

Example-1:
Input:
s1 = "digital", s2 = "ninja"
Output: "dgjlnt"

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1;
    cin>>s2;
    
    unordered_map<char, bool> m1;
    unordered_map<char, bool> m2;
    set<char> s;
    
    string ans = "";
    
    for(int i=0;i<s1.size();i++){
        m1[s1[i]] = true;
    }
    
    for(int i=0;i<s2.size();i++){
        if(m1[s2[i]] != true){
            s.insert(s2[i]);
        }
        m2[s2[i]] = true;
    }
    
    for(int i=0;i<s1.size();i++){
        if(m2[s1[i]] != true){
            s.insert(s1[i]);
        }
    }
    
    for(auto it: s){
        ans.push_back(it);
    }
    
    cout << ans << endl;

    return 0;
}