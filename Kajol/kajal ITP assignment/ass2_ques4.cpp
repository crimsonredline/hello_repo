// Write a C++ program to find maximum occurring integer in an array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int maxElement = arr[0];

    // Compare each element with every other to count frequency
    for (int i = 0; i < n; ++i) {
        int count = 1; // Count current element

        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum occurring element: " << maxElement << endl;
    cout << "It occurred " << maxCount << " times." << endl;

    return 0;
}
