#include <iostream>
#include <string>
using namespace std;

// check if string is a pangram
bool isPangram(const string &s) {
    bool visited[26] = {false};

    // mark characters present in string
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            visited[s[i] - 'a'] = true;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            visited[s[i] - 'A'] = true;
        }
    }

    // check if all 26 letters are present
    for (int i = 0; i < 26; i++) {
        if (!visited[i])
            return false;
    }

    return true;
}

// print result
void printResult(bool result) {
    if (result)
        cout << "The given string is a pangram";
    else
        cout << "The given string is not a pangram";
}

int main() {
    string str;

    // take input
    getline(cin, str);

    bool result = isPangram(str);

    // display result
    printResult(result);

    return 0;
}