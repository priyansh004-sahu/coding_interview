#include <iostream>
#include <string>
using namespace std;

void vowelsCounter(string s4) {
    int vowels = 0, consonants = 0;
    
     for (char ch : s4) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {   // filter for alphabets only
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "String: " << s4 << endl;
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string s4 = "IBM Associate System Engineer 2025";
    vowelsCounter(s4);
    return 0;
}