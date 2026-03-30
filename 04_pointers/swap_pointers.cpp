#include <iostream>
using namespace std;

// swap two numbers using pointers
void swapPointers(int *a, int *b) {
    int temp = *a;  // store value at address a
    *a = *b;        // assign value of b to a
    *b = temp;      // assign temp to b
}

int main() {
    int x, y;
    cin >> x >> y;

    // pass addresses
    swapPointers(&x, &y);

    // print swapped values
    cout << x << " " << y;

    return 0;
}