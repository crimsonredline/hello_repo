#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int n) {
    unordered_set<int> uniqueElements;
    
    // Store unique elements in set
    for (int i = 0; i < n; ++i) {
        uniqueElements.insert(arr[i]);
    }
    
    // Copy unique elements to a new array
    int i = 0;
    for (int elem : uniqueElements) {
        arr[i++] = elem;
    }
    
    // Print the new array with distinct elements
    cout << "Array after removing duplicates:\n";
    for (int j = 0; j < uniqueElements.size(); ++j) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    removeDuplicates(arr, n);
    
    return 0;
}
