#include<iostream>
using namespace std;

// (n-1) iterations in worst case
//comapre adjacent elements and swap if they are in wrong order
//largest element will be at the end of the array after first iteration
void bubbleSort(int arr[], int n)  {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// (n-1) iterations in worst case
//find the smallest element in unsorted array and swap it with the first element of the unsorted array
// after first iteration, smallest element will be at the beginning of the array
void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int smallestIdx = i;   // usnorted array starts from index i
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

// (n-1) iterations in worst case
// divide the array into sorted and unsorted part, and insert the first element of unsorted
// array into the correct position in sorted array
void InsertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i], prev = i-1;
        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--; 
        }
        arr[prev+1] = curr;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;
    bubbleSort(arr, n);
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    InsertionSort(arr, n);
    printArray(arr, n);


    return 0;
}