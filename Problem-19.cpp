A password string, pwd, consists of binary characters (Os and 1s). A cyber security expert 
is trying to determine the minimum number of changes required to make the password secure. 
To do so, it must be divided into substrings of non-overlapping, even length substrings. 
Each substring can only contain 1s or Os, not a mix. This helps to ensure that the password 
is strong and less vulnerable to hacking attacks.

Find the minimum number of characters that must be flipped in the password string, i.e. 
changed from 0 to 1 or 1 to 0 to allow the string to be divided as described.

Sample Test Case-1:
Input: pwd = "101011"
Output: 2

Sample Input Case-2:
Input: pwd = "100110"
Output: 3

#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int count = 0;

    for(int i=0;i<s.size()-1;i+=2){
        if(s[i] != s[i+1]){
            count++;
        }
    }

    cout << count;
    return 0;
}