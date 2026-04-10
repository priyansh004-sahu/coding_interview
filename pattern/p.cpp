#include <iostream>
using namespace std;

// 1. Pyramid Pattern
void pyramid(int n) {
    cout << "\nPyramid Pattern:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) cout << " ";
        for(int j = 1; j <= (2*i-1); j++) cout << "*";
        cout << endl;
    }
}

// 2. Inverted Pyramid
void invertedPyramid(int n) {
    cout << "\nInverted Pyramid:\n";
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) cout << " ";
        for(int j = 1; j <= (2*i-1); j++) cout << "*";
        cout << endl;
    }
}

// 3. Diamond Pattern
void diamond(int n) {
    cout << "\nDiamond Pattern:\n";
    
    // Upper part
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) cout << " ";
        for(int j = 1; j <= (2*i-1); j++) cout << "*";
        cout << endl;
    }
    
    // Lower part
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) cout << " ";
        for(int j = 1; j <= (2*i-1); j++) cout << "*";
        cout << endl;
    }
}

// 4. Floyd’s Triangle
void floyd(int n) {
    cout << "\nFloyd's Triangle:\n";
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

// 5. Number Triangle
void numberTriangle(int n) {
    cout << "\nNumber Triangle:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    pyramid(n);
    invertedPyramid(n);
    diamond(n);
    floyd(n);
    numberTriangle(n);

    return 0;
}