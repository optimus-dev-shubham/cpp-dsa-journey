#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        auto it = s.rbegin();
        int len = 0;

        // skip trailing spaces
        while (it != s.rend() && *it == ' ')
            ++it;

        // count last word
        while (it != s.rend() && *it != ' ') {
            ++len;
            ++it;
        }

        return len;
    }
};

int main() {
    Solution sol;

    string s1 = "Hello World";
    string s2 = "   fly me   to   the moon  ";
    string s3 = "luffy is still joyboy";

    cout << sol.lengthOfLastWord(s1) << endl; // 5
    cout << sol.lengthOfLastWord(s2) << endl; // 4
    cout << sol.lengthOfLastWord(s3) << endl; // 6

    return 0;
}