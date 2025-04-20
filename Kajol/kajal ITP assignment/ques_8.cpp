/* Write a C++ program to print the pattern
sample output: for n=4
1            1
12        21
123    321
12344321*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print increasing sequence: 1 to i
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        // Print spaces: 2 * (n - i) spaces
        for (int s = 1; s <= 2 * (n - i); ++s) {
            cout << " ";
        }

        // Print decreasing sequence: i to 1
        for (int j = i; j >= 1; --j) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
