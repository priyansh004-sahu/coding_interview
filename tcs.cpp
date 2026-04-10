#include<bits/stdc++.h>
using namespace std;

// ---------- NUMBER PROGRAMS ----------

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

long long factorial(int n) {
    long long fact = 1;
    for(int i=1; i<=n; i++) fact *= i;
    return fact;
}

int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int reverseNum(int n) {
    int rev = 0;
    while(n) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    return rev;
}

bool isPalindromeNum(int n) {
    return n == reverseNum(n);
}

bool isArmstrong(int n) {
    int sum = 0, digits = 0, temp = n;
    while(temp) { digits++; temp/=10; }

    temp = n;
    while(temp) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

int sumOfDigits(int n) {
    int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int countDigits(int n) {
    int count = 0;
    while(n) {
        count++;
        n /= 10;
    }
    return count;
}

int gcd(int a, int b) {
    while(b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a,b);
}

bool isPerfect(int n) {
    int sum = 0;
    for(int i=1; i<=n/2; i++) {
        if(n%i == 0) sum += i;
    }
    return sum == n;
}

// ---------- ARRAY PROGRAMS ----------

int largest(int arr[], int n) {
    return *max_element(arr, arr+n);
}

int secondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    return second;
}

void reverseArray(int arr[], int n) {
    reverse(arr, arr+n);
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) sum += arr[i];
    return sum;
}

void rotateArray(int arr[], int n, int k) {
    k %= n;
    reverse(arr, arr+n);
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
}

// ---------- STRING PROGRAMS ----------

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

bool isPalindromeString(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int countVowels(string s) {
    int count = 0;
    for(char c : s) {
        c = tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
    }
    return count;
}

string removeSpaces(string s) {
    string res = "";
    for(char c : s) {
        if(c != ' ') res += c;
    }
    return res;
}

void charFrequency(string s) {
    map<char,int> freq;
    for(char c : s) freq[c]++;
    for(auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }
}

// ---------- PATTERNS ----------

void starPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }
}

void numberPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << j << " ";
        cout << endl;
    }
}

void pyramidPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
}

void invertedPattern(int n) {
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
}

void diamondPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
}

// ---------- MAIN ----------

int main() {

    int n;
    cin >> n;

    // Number problems
    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;
    cout << factorial(n) << endl;
    cout << fibonacci(n) << endl;
    cout << reverseNum(n) << endl;
    cout << (isPalindromeNum(n) ? "Palindrome" : "Not Palindrome") << endl;
    cout << (isArmstrong(n) ? "Armstrong" : "Not Armstrong") << endl;
    cout << sumOfDigits(n) << endl;
    cout << countDigits(n) << endl;

    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
    cout << lcm(a,b) << endl;

    cout << (isPerfect(n) ? "Perfect" : "Not Perfect") << endl;

    // Array input
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++) cin >> arr[i];

    cout << largest(arr,size) << endl;
    cout << secondLargest(arr,size) << endl;
    reverseArray(arr,size);
    for(int i:arr) cout<<i<<" "; cout<<endl;
    cout << sumArray(arr,size) << endl;

    rotateArray(arr,size,2);
    for(int i:arr) cout<<i<<" "; cout<<endl;

    // String input
    string s;
    cin.ignore();
    getline(cin,s);

    cout << reverseString(s) << endl;
    cout << (isPalindromeString(s) ? "Palindrome" : "Not Palindrome") << endl;
    cout << countVowels(s) << endl;
    cout << removeSpaces(s) << endl;
    charFrequency(s);

    // Patterns
    starPattern(5);
    numberPattern(5);
    pyramidPattern(5);
    invertedPattern(5);
    diamondPattern(5);

    return 0;
}