#include <iostream>
#include <string>
using namespace std;

// finds the extra character between two strings
char findExtraChar(const string &s1, const string &s2) {
    char ans = 0;

    // XOR all characters of first string
    for (char ch : s1)
        ans ^= ch;

    // XOR all characters of second string
    for (char ch : s2)
        ans ^= ch;

    return ans;
}

int main() {
    string s1, s2;

    // take input
    getline(cin, s1);
    getline(cin, s2);

    char result = findExtraChar(s1, s2);

    cout << result;

    return 0;
}