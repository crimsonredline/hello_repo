//Write a program to print the numbers from 1 to 100, but           
// replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible
// by both print “FizzBuzz”.
#include <bits/stdc++.h>
using namespace std;
int main(){
// Loop through numbers 1 to 100
for (int i = 1; i <= 100; i++) {
    // Check if divisible by both 3 and 5
    if (i % 3 == 0 && i % 5 == 0) {
        cout << "FizzBuzz" << endl;
    }
    // Check if divisible by 3
    else if (i % 3 == 0) {
        cout << "Fizz" << endl;
    }
    // Check if divisible by 5
    else if (i % 5 == 0) {
        cout << "Buzz" << endl;
    }
    // Otherwise, print the number
    else {
        cout << i << endl;
    }
}

return 0;


}
