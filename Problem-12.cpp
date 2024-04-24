Given two strings first and second, return true if first is an anagram of second, return false otherwise

An anagram is a word formed by rearranging the letters of a different word, typically using all the original letters exactly once.

Example-1:
Input: first = "tcsdigital", second = "digitaltcs"
Output: true

Example-2:
Input: first = "tcsninja", second = "tcsdigital"
Output: false

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;

    unordered_map<char, int> mp;

    for(int i=0;i<s1.size();i++){
        mp[s1[i]]++;
    }

    for(int i=0;i<s2.size();i++){
        mp[s2[i]]--;
    }

    for(auto it:mp){
        if(it.second != 0){
            cout << "False" << endl;
            return 0;
        }
    }

    cout << "True" << endl;
    return 0;
}