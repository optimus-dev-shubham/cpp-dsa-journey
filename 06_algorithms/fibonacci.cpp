#include <iostream>
using namespace std;

int main()
{
    int n, f1 = 0, f2 = 1, nf = 0;

    // take input
    cin >> n;

    // print first two terms
    if (n >= 1) cout << f1 << " ";
    if (n >= 2) cout << f2 << " ";

    // generate remaining terms
    for (int i = 3; i <= n; i++)
    {
        nf = f1 + f2;
        cout << nf << " ";

        f1 = f2;
        f2 = nf;
    }

    // print nth term
    if (n == 0) nf = 0;
    else if (n == 1) nf = 0;
    else if (n == 2) nf = 1;

    cout << endl << nf;

    return 0;
}