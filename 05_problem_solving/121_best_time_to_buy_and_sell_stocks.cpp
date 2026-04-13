#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Best Time to Buy and Sell Stock (LeetCode 121)

Approach:
- Track the minimum price seen so far.
- For each day, calculate profit if sold today.
- Update maximum profit accordingly.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];   // Minimum price seen so far
        int max_profit = 0;          // Maximum profit

        for (int i = 0; i < prices.size(); i++) {
            // Update minimum price
            if (prices[i] < min_price) {
                min_price = prices[i];
            }

            // Calculate profit if sold today
            int profit = prices[i] - min_price;

            // Update maximum profit
            if (profit > max_profit) {
                max_profit = profit;
            }
        }

        return max_profit;
    }
};

/*
Local Testing (Main Function)
*/
int main() {
    Solution obj;

    // Test case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Output 1: " << obj.maxProfit(prices1) << endl; // Expected: 5

    // Test case 2
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Output 2: " << obj.maxProfit(prices2) << endl; // Expected: 0

    return 0;
}