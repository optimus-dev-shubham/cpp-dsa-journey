#include <iostream>
#include <string>
using namespace std;

// check if string is palindrome
bool isPalindrome(const string &str)
{
    // two pointer approach
    int i = 0, j = str.length() - 1;

    while (i < j)
    {
        if (str[i] != str[j])
            return false;

        i++;
        j--;
    }

    return true;
}

int main()
{
    string s;

    // take input (single word)
    cin >> s;

    if (isPalindrome(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}