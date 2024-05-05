For each element of an array, a counter is set to 0. The element is compared to each element to its left. 
If the element to the left is greater, the absolute difference is subtracted from the counter. 
If the element to the left is less, the absolute difference is added to the counter. 
For each element of the array, determine the value of the counter. These values should be stored in 
an array and returned.

Test Case-1:
Input: n = 3, arr = [2, 4, 3]
Output: [0, 2, 0]

Test Case-2:
Input: n = 3, arr = [2, 1, 3]
Output: [0, -1, 3]

Explanation:
n = 3 the number of elements
arr = [2, 4, 3]

• For arr[0] = 2, counter starts at 0 and there are no elements to the left so counter = 0.
• For arr[1]=4, counter starts at 0 and then increases by |4 - 2| = 2 at the first and only 
comparison: counter = 2.
• Testing arr[2] = 3 first against 4, counter = 0-|3- 4| =-1, and then against 2, 
counter = - 1 + |3 - 2| = 0.
• The answer array is [0, 2, 0].


#include <bits/stdc++.h>
using namespace std;

vector<int> calculateCounters(vector<int>& arr) {
    int n = arr.size();
    vector<int> counters(n, 0);

    for (int i = 1; i < n; i++) {
        int sum = 0;
        for(int j=0;j<i;j++){
            int ele = arr[i] - arr[j];
            sum += ele;
        }
        counters[i] = sum;
    }

    return counters;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> result = calculateCounters(arr);

    cout << "Counter values for each element:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


