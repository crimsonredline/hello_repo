/*Write a C++ program to find the second smallest elements in a
given array of integers(all elements of array distinct).*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (at least 2): ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least two elements!" << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " distinct elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int INT_MAX;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second smallest element: " << secondSmallest << endl;

    return 0;
}
