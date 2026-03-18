// comma separted array input from a single line
#include <bits/stdc++.h>
using namespace std;

int main() {

    string line;
    getline(cin, line);

    stringstream ss(line);

    vector<int> arr;
    string temp;

    while(getline(ss, temp, ',')) {   // split by comma
        arr.push_back(stoi(temp));
    }

    // print to check
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}