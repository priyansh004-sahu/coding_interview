#include <iostream>
using namespace std;

int starPatter(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int invertedPattern(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int numberPattern (int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int prymidPattern(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    starPatter(n);
    cout << endl;
    invertedPattern(n);
    cout << endl;
    numberPattern(n);
    cout << endl;
    prymidPattern(n);
    return 0;
}
