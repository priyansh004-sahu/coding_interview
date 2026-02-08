#include <iostream>
using namespace std;

void oddAndEven(int arr[], int n) {
    int evenCount = 0, oddCount = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) evenCount++;
        else oddCount++; 
    }
    cout << "Even Count: " << evenCount << endl;
    cout << "Odd Count: " << oddCount << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    oddAndEven(arr, 6);
    return 0;
}