#include <iostream>
using namespace std;

void countCharacterTypes(const string& str) {
    int alphabets = 0, digits = 0, specials = 0;
    
    for (char c : str) {
        if (isalpha(c))
            alphabets++;
        else if (isdigit(c))
            digits++;
        else
            specials++;
    }
    
    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specials << endl;
}

int main() {
    string str = "Hello World! 123";
    
    countCharacterTypes(str);
    
    return 0;
}
