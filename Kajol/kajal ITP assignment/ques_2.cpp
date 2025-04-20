// Write a C++ program to input 3 sides of triangle and a triangle can be drawn
 //from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
 //scalene triangle.
 #include <iostream>
using namespace std;

bool isValidTriangle(int a, int b, int c) {
    // A triangle is valid if the sum of any two sides is greater than the third side
    return (a + b > c) && (b + c > a) && (c + a > b);
}

int main() {
    int a, b, c;

    // Input the three sides of the triangle
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the sides form a valid triangle
    if (isValidTriangle(a, b, c)) {
        cout << "A triangle can be formed." << endl;

        // Check the type of triangle
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "A triangle cannot be formed with these sides." << endl;
    }

    return 0;
}
