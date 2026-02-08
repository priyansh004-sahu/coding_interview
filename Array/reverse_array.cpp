#include <iostream>
#include <algorithm>
using namespace std;

void reverseArry(int arr[], int n) {
    int st = 0, end = n-1;
    while(st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;  
    } 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    reverseArry(arr, n);
    cout << "Reversed Array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}