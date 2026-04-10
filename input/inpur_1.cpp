// array input from a single line with spaces
#include <bits/stdc++.h>
using namespace std;

int main() {

    string line;
    getline(cin, line);

    stringstream ss(line);

    vector<int> arr;   // ✅ missing line

    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

    // print to check
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}