#include <iostream>
#include <climits>
using namespace std;

int LargestNumber(int nums[], int n) {
    int largest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(nums[i] > largest)
            largest = nums[i];
    }
    return largest;
}

int main() {
    int n;
    cin >> n;  // number of elements

    int nums[n];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << LargestNumber(nums, n);

    return 0;
}