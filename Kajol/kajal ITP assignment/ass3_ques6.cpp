#include <iostream>
using namespace std;

void convertToLowercase(string& str) {
    for (char& c : str) {
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }
    }
}

int main() {
    string str = "HELLO World!";
    
    convertToLowercase(str);
    
    cout << "String in lowercase: " << str << endl;
    
    return 0;
}
