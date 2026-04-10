#include<iostream>
#include<vector>
using namespace std;



int main() {
//    vector<int> vec; // 0
//    vector<int> vec = {1, 2, 3, 4, 5}; // 3
// //    vector<int> vec(3,0);

//    for(int i : vec) {
//        cout << i << " ";
//    }    
int a = 10;
int *ptr = &a;
cout << ptr << endl;
cout << *ptr << endl;
}