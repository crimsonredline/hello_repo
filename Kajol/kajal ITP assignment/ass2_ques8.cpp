#include <iostream>
using namespace std;

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return n % 10 + sumOfDigits(n / 10);  // Add last digit and recurse on remaining digits
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfDigits(number);
    cout << "The sum of digits of " << number << " is: " << result << endl;

    return 0;
}
