/* Write a C++ program to print the pattern
sample output: for n=3              for n=2
123                                            12
112233                                      1122
111222333*/

#include <iostream>
using namespace std;

int main() {
    int n;
   cout<<"Enter the number of input";
   cin>>n; 

    // Line 1: print 1 to n
    for (int i = 1; i <= 3; ++i) {
        cout << i;
    }
    cout << endl;

    // Line 2: print each number from 1 to n twice
    for (int i = 1; i <= 3; ++i) {
        cout << i << i;
    }
    cout << endl;

    // Line 3: print i n times (1 n times, then 2 n times, ..., up to n)
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i;
        }
    }
    cout << endl;

    return 0;
}



