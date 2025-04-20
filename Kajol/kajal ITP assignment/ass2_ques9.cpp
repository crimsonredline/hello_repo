#include <iostream>
using namespace std;

// Recursive function to print array elements
void printArray(int arr[], int size, int index = 0) {
    // Base case: If index is equal to size, stop recursion
    if (index == size)
        return;
    
    // Print the current element
    cout << arr[index] << " ";

    // Recursively call the function for the next index
    printArray(arr, size, index + 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    printArray(arr, n);
    cout << endl;

    return 0;
}
