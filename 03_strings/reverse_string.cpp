#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    // take full string input
    getline(cin, str);

    // print string in reverse
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}