// Write a C++ program to copy the elements of one array into another array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int original[n], copy[n];

    // Input original array
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> original[i];
    }

    // Copy elements from original to copy
    for (int i = 0; i < n; ++i) {
        copy[i] = original[i];
    }

    // Print copied array
    cout << "Copied array:\n";
    for (int i = 0; i < n; ++i) {
        cout << copy[i] << " ";
    }
    cout << endl;

    return 0;
}

 