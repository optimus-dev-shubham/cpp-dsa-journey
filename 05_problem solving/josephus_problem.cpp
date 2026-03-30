#include <iostream>
using namespace std;

// Josephus problem (1-based indexing)
int josephus(int n, int k)
{
    // base case
    if (n == 1)
        return 1;

    // recursive relation
    return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    int people, k;

    cin >> people >> k;

    // print safe position
    cout << josephus(people, k);

    return 0;
}