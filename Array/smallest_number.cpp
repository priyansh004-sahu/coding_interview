#include <iostream>
#include <climits>
using namespace std;

int smallestNumber(int nums[], int n) {
    int smallest = INT_MAX;
    for(int i=0; i<n; i++) {
        if(nums[i] < smallest) smallest = nums[i];
    }
    return smallest;
}

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    cout << "Smallest Number: " << smallestNumber(nums, 6) << endl;
    return 0;
}