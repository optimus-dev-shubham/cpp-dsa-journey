#include <iostream>
#include <vector>
using namespace std;

/*
    Problem: Find Minimum in Rotated Sorted Array
    Approach: Binary Search
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[high]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return nums[low];
    }
};

int main() {
    Solution obj;

    // Example test case
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    int result = obj.findMin(nums);

    cout << "Minimum element: " << result << endl;

    return 0;
}