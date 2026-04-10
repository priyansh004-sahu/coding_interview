#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

long long factorial(int n) {
    long long fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

// ✅ Recursive Fibonacci
int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int reverseNum(int n) {
    int rev = 0;
    while(n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(int n) {
    return n == reverseNum(n);
}

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    int temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    // Prime
    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;

    // Factorial
    cout << factorial(n) << endl;

    // Fibonacci (recursive)
    cout << fibonacci(n) << endl;

    // Reverse
    cout << reverseNum(n) << endl;

    // Palindrome
    cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome") << endl;

    // Armstrong
    cout << (isArmstrong(n) ? "Armstrong" : "Not Armstrong") << endl;

    return 0;
}
