#include <iostream>
using namespace std;

void moveNegativeToSide(int arr[], int n) {
    int temp[n];
    int j = 0;

    // Copy negative elements to temp[] and non-negative elements to temp[]
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0)
            temp[j++] = arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0)
            temp[j++] = arr[i];
    }

    // Copy elements from temp[] back to arr[]
    for (int i = 0; i < n; ++i) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveNegativeToSide(arr, n);
    
    cout << "Array after moving negative elements to one side:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
