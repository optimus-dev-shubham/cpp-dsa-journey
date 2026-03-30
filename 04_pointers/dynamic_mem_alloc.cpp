#include <iostream>
using namespace std;

// allocate memory and return pointer
int* createValue()
{
    int *ptr = new int;  // dynamic allocation
    *ptr = 10;

    return ptr;
}

int main()
{
    int *p = createValue();

    cout << *p;

    delete p;  // free memory

    return 0;
}