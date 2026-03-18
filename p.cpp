    // check if the word is in all caps, all lowercase, or only the first letter is capitalized

#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;

    int cap = 0;

    for(char c : word){
        if(isupper(c)) cap++;
    }

    if(cap == word.length()) {
        cout << "true";
    }
    else if(cap == 0) {
        cout << "true";
    }
    else if(cap == 1 && isupper(word[0])) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}