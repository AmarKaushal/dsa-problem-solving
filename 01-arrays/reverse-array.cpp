// Problem : Reverse The Array
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/reverse-an-array/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach : iterate upto n/2 elements and swap the i-th element from the front with the (n-i-1)-th element from the back in-place

#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();

        for(int i=0;i<n/2;i++)
        {
            int start = i , end = n-i-1;
            int temp = arr[start];
            arr[i] = arr[end];
            arr[end] = temp;
        }
    }
};
