/*
      Approach:
    - Use Binary Search.
    - If nums[mid] < nums[mid + 1], peak lies on right.
    - Else, peak lies on left (including mid).

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[mid + 1])
                low = mid + 1;
            else
                high = mid;
        }

        return low; // peak index
    }
};