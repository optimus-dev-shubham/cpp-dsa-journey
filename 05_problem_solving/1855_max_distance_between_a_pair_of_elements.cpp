#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(const vector<int>& nums1, const vector<int>& nums2) {
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        int max_dist = 0;

        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                int dist = j - i;
                if (dist > max_dist) max_dist = dist;
                ++j;
            } else {
                ++i;
            }
        }
        return max_dist;
    }
};

int main() {
    Solution sol;

    // Local test cases
    vector<int> nums1 = {55, 30, 5, 4, 2};
    vector<int> nums2 = {100, 20, 10, 10, 5};

    cout << "Max Distance: " << sol.maxDistance(nums1, nums2) << endl;

    return 0;
}