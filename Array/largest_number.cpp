#include <iostream>
#include <climits>
using namespace std;

int LargestNumber(int nums[], int n) {
    int largest = INT_MIN;
    for(int i=0; i<n; i++) {
        if(nums[i] > largest) largest= nums[i];
    }
    return largest;
}

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    cout << "Largest Number: " << LargestNumber(nums, 6) << endl;
    return 0;
}