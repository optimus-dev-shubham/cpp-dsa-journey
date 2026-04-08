#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        // Boyer-Moore Voting Algorithm
        for (int num : nums) {
            // If count drops to 0, pick a new candidate
            if (count == 0) {
                candidate = num;
            }

            // Increase count if same, else decrease
            if (num == candidate)
                count++;
            else
                count--;
        }

        // Since problem guarantees majority element exists,
        // candidate will always be the answer
        return candidate;
    }
};