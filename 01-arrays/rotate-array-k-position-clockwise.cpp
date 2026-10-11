// Problem : Rotate Array Clockwise (Using Temp Array)
// Platform : GeeksforGeeks
// Time Complexity : O(N)
// Space Complexity : O(N)
// Approach : using extra temp array


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotateClockwise(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;
        vector<int> temp = arr;
        
        for (int i = 0; i < n; i++) {
            arr[(i + k) % n] = temp[i];
        }
    }
};