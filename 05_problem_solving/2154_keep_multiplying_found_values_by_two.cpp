#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        // keep doubling 'original' while it exists in the array
        if (find(nums.begin(), nums.end(), original) != nums.end()) {
            return findFinalValue(nums, original * 2);
        }
        return original;
    }
};

/*
Notes:
- Used linear search (std::find) for simplicity.
- Time complexity is O(n * k), where k = number of doublings.
- Will refactor this using unordered_set (O(1) lookup) after learning sets in STL.
*/