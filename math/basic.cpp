#include<iostream>
using namespace std;

string prime(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) {
            return "Not Prime";
        }
        
    }
    return "Prime";
}


void printNumber(int n) {
    int count = 0, sum = 0;
    while(n > 0) {
        int digit= n%10;    // extract the last digit
        cout << digit << " ";
        count++;         // count the number of digits
        sum += digit;         // sum of the digits
        n = n/10;
    }
    cout << "\nCount: " << count << ", Sum: " << sum << endl;
}

bool armstrong(int n) {
    int original = n; // Store the original number for comparison
    int sumOfCubes = 0;
    while(n != 0) {
        int digit = n%10;
        sumOfCubes += digit*digit*digit;
        n = n/10;
    }
    return sumOfCubes == original;
}

int revesrse(int n) {
    int rev = 0;
    while(n !=0) {
        int dig = n%10;
        rev = rev*10 + dig;
        n = n/10;
    }
    return rev;
}

int main() {
    cout << prime(80) << endl;
    printNumber(712);
   if(armstrong(153)) {
        cout << "yes it ❤❤ Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }

    cout << revesrse(1234) << endl;


    return 0;
}