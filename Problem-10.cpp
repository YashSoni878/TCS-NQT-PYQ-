Problem Statement - An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

1st data, Total number of vehicle (two-wheeler + four-wheeler) = V
2nd data, Total number of wheels = W

The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data. Print the two wheelers total number and four wheelers total number, If given data is Invalid then Print "Invalid".

Input:
200-> Value of V
540 -> Value of W
Output: TW = 130 FW = 70

#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, w;
    cin>>v;
    cin>>w;
    float tw = ((v * 4) - w)/2;
    float fw = v - tw;
    
    // Edge cases
    // 1. if w is odd
    // 2. if w is less than 2
    // 3. if w is less than or equal to v
    if(w & 1 || w < 2 || w <= v){
        cout <<"Invalid" << endl;
        return 0;
    }
    
    cout << "tw: " << tw << "fw: " << fw << endl;
    

    return 0;
}