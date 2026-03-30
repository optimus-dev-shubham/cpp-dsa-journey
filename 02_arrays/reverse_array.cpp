#include <iostream>
using namespace std;

// print array in reverse order
void reverseTraversal(int arr[], int n) {

    // start from last index and go backwards
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    // take input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // call function
    reverseTraversal(arr, n);

    return 0;
}