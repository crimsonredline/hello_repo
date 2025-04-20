// Write a C++ program to find the largest digit in a number#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findLargestDigit(int number) {
    int largestDigit = 0;  // Initialize the largest digit as 0

    // Loop through each digit of the number
    while (number > 0) {
        int digit = number % 10;  // Get the last digit
        if (digit > largestDigit) {
            largestDigit = digit;  // Update the largest digit if the current one is larger
        }
        number /= 10;  // Remove the last digit
    }

    return largestDigit;
}

int main() {
    int num;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is positive or negative and convert to positive for digit extraction
    num = abs(num);

    int largestDigit = findLargestDigit(num);

    cout << "The largest digit in the number is: " << largestDigit << endl;

    return 0;
}
