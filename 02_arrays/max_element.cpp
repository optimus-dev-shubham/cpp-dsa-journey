#include <iostream>
using namespace std;

// Function to find the largest element in an array
int findLargest(int arr[], int n) {
    int max = arr[0];  // Initialize with first element

    for (int i = 1; i < n; i++) {
        // Update max if current element is greater
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Taking array input
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Function call
    int result = findLargest(arr, n);

    // Output result
    cout << "Largest element: " << result;

    return 0;
}