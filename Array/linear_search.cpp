#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 6};
    int size = 7, target = 8;
    cout << "Index of " << target << " is: " << LinearSearch(arr, size, target) << endl;
    return 0;
}