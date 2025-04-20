#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input sizes
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements for first array:\n";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements for second array:\n";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    // Merge arrays
    int mergedSize = n1 + n2;
    int merged[mergedSize];

    for (int i = 0; i < n1; ++i) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; ++i) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array in reverse
    cout << "Merged array in reverse order:\n";
    for (int i = mergedSize - 1; i >= 0; --i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
