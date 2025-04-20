#include <iostream>
using namespace std;

void removeNonAlphabets(string& str) {
    string result = "";
    
    for (char c : str) {
        if (isalpha(c)) {
            result += c;
        }
    }
    
    str = result;
}

int main() {
    string str = "Hello! 123 World!";
    
    removeNonAlphabets(str);
    
    cout << "String after removing non-alphabets: " << str << endl;
    
    return 0;
}
