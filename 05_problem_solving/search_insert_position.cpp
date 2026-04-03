#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2; // avoid overflow

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return left; // insert position
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 3, 5, 6};

    cout << obj.searchInsert(nums, 5) << endl; // 2
    cout << obj.searchInsert(nums, 2) << endl; // 1
    cout << obj.searchInsert(nums, 7) << endl; // 4

    return 0;
}