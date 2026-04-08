/*
    Problem: Palindrome Number (LeetCode #9)

    Approach:
    Instead of reversing the entire number (which may cause overflow),
    we reverse only half of the number and compare it with the remaining half.

    Key Observations:
    - Negative numbers are not palindromes.
    - Numbers ending with 0 (but not 0 itself) cannot be palindromes.
    - Reverse only half to avoid overflow.

    Time Complexity: O(log10(n))
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Edge cases
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        // Reverse half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + (x % 10);
            x /= 10;
        }

        // For even digits: x == reversedHalf
        // For odd digits: x == reversedHalf / 10
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};

// Optional main() for local testing
int main() {
    Solution sol;

    cout << sol.isPalindrome(121) << endl;     // 1 (true)
    cout << sol.isPalindrome(-121) << endl;    // 0 (false)
    cout << sol.isPalindrome(10) << endl;      // 0 (false)
    cout << sol.isPalindrome(1221) << endl;    // 1 (true)
    cout << sol.isPalindrome(1000021) << endl; // 0 (false)

    return 0;
}