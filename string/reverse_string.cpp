#include <iostream>
#include <string>
#include <algorithm> // for swap
using namespace std;

void reverse_String(string &str) {
    int st = 0, end = str.length() - 1;
    while(st < end) {
        swap(str[st], str[end]);
        st++;
        end--;  
    }
}

int main() {
    string str = "Hello World";
    cout << "Original: " << str << endl;
    reverse_String(str);
    cout << "Reversed: " << str << endl;
    return 0;
}