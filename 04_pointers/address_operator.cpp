#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    // pointer to store address of 'a'
    int *address = &a;

    // print value using pointer
    cout << *address;

    return 0;
}