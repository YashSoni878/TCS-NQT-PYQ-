Problem Statement:

Your task is to print three things-
1. Higher selling item
2. Total selling price (upto 2 decimal places)
3. Average selling price (upto 2 decimal places)

Sample test case:
Input:
{["apple", 1.0, 5],
["orange", 10.0, 5],
["apple", 10.0, 5]}

Output:
apple
105.00
35.00


#include <bits/stdc++.h>

using namespace std;

int main() {
    // Input data
    vector<vector<string>> items = {
        {"apple", "1.0", "5"},
        {"orange", "10.0", "5"},
        {"apple", "10.0", "5"}
    };
    
    int inputSize = items.size();
    // cout << "Size of input: " << inputSize << endl;

    // Store the total selling price for each item
    unordered_map<string, double> sellingPrices;

    // Calculate total selling price for each item
    for (const auto& item : items) {
        double price = stod(item[1]) * stoi(item[2]);
        sellingPrices[item[0]] += price;
    }

    // Find the higher selling item
    string higherSellingItem;
    double maxSellingPrice = INT_MIN;
    for (const auto& pair : sellingPrices) {
        if (pair.second > maxSellingPrice) {
            maxSellingPrice = pair.second;
            higherSellingItem = pair.first;
        }
    }

    // Calculate total selling price and count
    double totalSellingPrice = 0.0;
    int totalCount = 0;
    for (const auto& pair : sellingPrices) {
        totalSellingPrice += pair.second;
    }

    // Calculate average selling price
    double averageSellingPrice = totalSellingPrice / inputSize;

    // Output
    cout << higherSellingItem << endl;
    cout << fixed << setprecision(2) << totalSellingPrice << endl;
    cout << fixed << setprecision(2) << averageSellingPrice << endl;

    return 0;
}
