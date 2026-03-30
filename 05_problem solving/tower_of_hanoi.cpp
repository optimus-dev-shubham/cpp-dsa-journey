#include <iostream>
using namespace std;

// Tower of Hanoi: print moves and count total steps
int towerOfHanoi(int n, int from, int to, int aux)
{
    static int moves = 0;

    // base case
    if (n == 0)
        return 0;

    // move n-1 discs to auxiliary rod
    towerOfHanoi(n - 1, from, aux, to);

    // move current disc
    cout << from << " -> " << to << " ";
    moves++;

    // move n-1 discs to destination
    towerOfHanoi(n - 1, aux, to, from);

    return moves;
}

int main()
{
    int disc, from = 1, to = 3, aux = 2;

    cin >> disc;

    int moves = towerOfHanoi(disc, from, to, aux);

    cout << endl << moves;

    return 0;
}