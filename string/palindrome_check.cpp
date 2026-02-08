#include <iostream>
#include <string>
using namespace std;

bool isAlphaNumeric(char ch) {
    if ((ch >= '0' && ch <='9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    } 
    return false;
}

bool palindromecheck(string s) {
   int st = 0, end = s.length()-1;
    while(st < end) {
        if(!isAlphaNumeric(s[st])) {
            st++; continue;
        }
        if(!isAlphaNumeric(s[end])) {
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << "String: " << s << endl;
    if (palindromecheck(s)) {
        cout << "Result: It is a Palindrome" << endl;
    } else {
        cout << "Result: Not a Palindrome" << endl;
    }
    return 0;
}