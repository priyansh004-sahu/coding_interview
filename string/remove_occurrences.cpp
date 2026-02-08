#include <iostream>
#include <string>
using namespace std;

string RemoveAllOccurences(string &s2, string part) {
    while(s2.length() > 0 && s2.find(part) < s2.length()) {
        s2.erase(s2.find(part), part.length());
    }
    return s2;
}

int main() {
    string s2 = "daabcbaabcbc", part = "abc";
    cout << "Original string: " << s2 << endl;
    cout << "Removing: " << part << endl;
    cout << "Result: " << RemoveAllOccurences(s2, part) << endl;
    return 0;
}