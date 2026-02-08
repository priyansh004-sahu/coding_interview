#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j< n-i-1; j++) {
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    sortArray(arr, 5);
    cout << "Sorted Array: ";
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    return 0;
}