You have given a string and your task is to remove vowels from it.

Example-1:
Input: s = "welcome to tcs digital"
Output: "wlcm t tcs dgtl"

Example-2:
Input: s = "what is the tcs ?"
Output: "wht s s th tcs ?"

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string ans = "";

    for(int i=0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            continue;
        }
        else{
            ans += s[i];
        }
    }

    cout << ans << endl;
    return 0;
}