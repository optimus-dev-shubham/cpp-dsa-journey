#include <iostream>
#include <string>
using namespace std;

// check if two strings are anagrams
bool isAnagram(const string &s1, const string &s2)
{
    // length must be same
    if (s1.length() != s2.length())
        return false;

    int freq[256] = {0};

    // count characters of first string
    for (const char &ch : s1) {
        freq[ch]++;
    }

    // subtract using second string
    for (const char &ch : s2) {
        freq[ch]--;
    }

    // check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    string str1, str2;

    // take full line input
    getline(cin, str1);
    getline(cin, str2);

    if (isAnagram(str1, str2))
        cout << "These are anagrams";
    else
        cout << "These are not anagrams";

    return 0;
}