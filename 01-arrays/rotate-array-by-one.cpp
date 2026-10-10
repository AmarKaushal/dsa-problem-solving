// Problem : Rotate Array by One
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach : Store the last element in a variable, shift all remaining elements one position to the right, and place the last element at index 0.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int temp = arr[n - 1];
        
        // Shift elements right starting from second last element
        for (int i = n - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        
        // Place saved last element at index 0
        arr[0] = temp;
    }
};