A person has many shoes of different sizes and he wants to arrange them in pairs.
Calculate the number of pairs of shoes he can make.

Example-1:
Input: 8
7L 7R 7L 8L 6R 7R 8R 6R
Output: 3

Example-2:
Input: 5
7R 7L 8R 10R 10L
Output: 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int> left(100);
    vector<int> right(100);
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int showSize = stoi(s.substr(0, s.size()-1));
        
        if(s.back() == 'L'){
            left[showSize]++;
        }
        else{
            right[showSize]++;
        }
    }
    
    int count = 0;
    for(int i=0;i<100;i++){
        count += min(left[i], right[i]);
    }
    
    cout << count;
    
    return 0;
}
