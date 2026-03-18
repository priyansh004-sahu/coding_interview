#include <bits/stdc++.h>
using namespace std;
// array input from a single line with square brackets and commas
int main() {

    string s;
    getline(cin, s);   // [1, 2, 3, 4]

    // remove unwanted characters
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());
    s.erase(remove(s.begin(), s.end(), ','), s.end());

    // now string becomes: "1  2  3  4"

    stringstream ss(s);
    vector<int> arr;

    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

    // print
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}