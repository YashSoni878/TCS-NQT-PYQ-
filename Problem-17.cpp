Finding the count of the appearances of a particular word or string in another string.

#include <bits/stdc++.h>

using namespace std;

int main() {
    string inputString = "apple orange banana orange apple";
    string targetWord = "apple";

    // Create a string stream to tokenize the input string
    stringstream ss(inputString);
    string word;
    
    // Initialize count
    int count = 0;

    // Tokenize the string by space and check each token
    while (ss >> word) {
        // If the token matches the target word, increment count
        if (word == targetWord) {
            count++;
        }
    }

    // Output the count of appearances
    cout << "Count of '" << targetWord << "' in the string: " << count << endl;

    return 0;
}