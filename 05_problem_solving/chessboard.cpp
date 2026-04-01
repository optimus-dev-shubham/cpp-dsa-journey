#include <iostream>
#include <string>
using namespace std;

// determine color of given chess position (e.g., a1, b2)
string determineColor(const string &s)
{
    // convert column (a-h) to number
    int col = s[0] - 'a' + 1;

    // convert row (1-8) to number
    int row = s[1] - '0';

    // same parity => black, else white
    if ((col + row) % 2 == 0)
        return "Black";
    else
        return "White";
}

int main()
{
    string s;
    cin >> s;

    cout << determineColor(s);

    return 0;
}