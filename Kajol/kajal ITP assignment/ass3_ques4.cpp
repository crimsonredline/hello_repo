#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case k is larger than n
    int temp[k];
    
    // Store last k elements in temp[]
    for (int i = 0; i < k; ++i) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift the rest of the elements
    for (int i = n - 1; i >= k; --i) {
        arr[i] = arr[i - k];
    }
    
    // Copy elements from temp[] to arr[]
    for (int i = 0; i < k; ++i) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2; // Rotate by 2 positions

    rotateArray(arr, n, k);
    
    cout << "Array after rotation:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
