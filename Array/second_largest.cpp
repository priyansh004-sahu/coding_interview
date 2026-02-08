#include <iostream>
#include <climits>
using namespace std;

int secondLargestNumber(int nums[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++) {
        if(nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
        }
    }
    return secondLargest;
}

int main() {
    int nums[] = {10, 20, 4, 45, 99};
    cout << "Second Largest: " << secondLargestNumber(nums, 5) << endl;
    return 0;
}