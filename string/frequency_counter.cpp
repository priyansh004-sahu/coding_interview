#include <iostream>
#include <string>
using namespace std;

void freqCounter(string s3, int freq[])  {
    // count frequency
    for(unsigned char ch : s3) {
        freq[ch]++;
    }
    // print in order of appearance
    for(unsigned char ch : s3) {
        if(freq[ch] > 0) {
            cout << ch << " --> " << freq[ch] << endl;
            freq[ch] = 0;   // prevent re-printing the same character
        }
    }
}

int main() {
    string s3 = "priyansh";
    int freq[256] = {0}; // Array for all possible ASCII characters
    cout << "Frequency count for: " << s3 << endl;
    freqCounter(s3, freq);
    return 0;
}