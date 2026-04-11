#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        // Reset for second search
        low = 0;
        high = nums.size() - 1;

        // Find last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {first, last};
    }
};

// Optional: for local testing
int main() {
    Solution obj;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> res = obj.searchRange(nums, target);
    cout << res[0] << " " << res[1] << endl;

    return 0;
}