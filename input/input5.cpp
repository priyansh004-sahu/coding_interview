// 2d array input from a single line with commas
#include <bits/stdc++.h>
using namespace std;

int main() {

    int rows = 3, cols = 2;

    string s;
    getline(cin, s);   // "1, 2, 3, 4, 5, 6"

    // remove commas
    s.erase(remove(s.begin(), s.end(), ','), s.end());

    stringstream ss(s);

    vector<int> arr;
    int num;

    while (ss >> num) {
        arr.push_back(num);
    }

    // create 2D array
    vector<vector<int>> matrix(rows, vector<int>(cols));

    int k = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] = arr[k++];
        }
    }

    // print
    for(auto row : matrix){
        for(int x : row){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}