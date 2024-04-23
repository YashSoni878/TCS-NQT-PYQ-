// You have given a string s and a character ch, your task is to find the first and last occurrence of the given character.

// NOTE: Return the first and last occurrence indexes

// Example-1:
// Input: s = "developer", ch = "e"
// Output: {1, 7}

// Example-2:
// Input: s = "organization", ch = "o"
// Output: {0, 10}


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char ch;
    cin>>s;
    cin>>ch;
    
    int start = -1;
    int last = -1;
    for(int i=0;i<s.size();i++){
        if(s[i] == ch && start == -1){
            start = i;
        }
        else if(ch == s[i]){
            last = i;
        }
    }
    
    cout << start << " " << last<<endl;
    return 0;
}