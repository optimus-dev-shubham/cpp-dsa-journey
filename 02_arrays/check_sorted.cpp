#include <iostream>
#include <vector>
using namespace std;

// checks if array is sorted in non-decreasing order
bool isSorted(vector<int>& arr) {
    int prev = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < prev) {
            return false;
        }
        prev = arr[i];
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr))
        cout << "True";
    else
        cout << "False";

    return 0;
}