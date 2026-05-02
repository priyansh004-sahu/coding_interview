#include<iostream>
using namespace std;

class Bank {
private:
   int balance;

public:
   void setBalance(int b) {
       balance = b;
   }

   int getBalance() {
       return balance;
   }
};


int main() {
    Bank myBank;
    myBank.setBalance(1000);
    cout << "Current Balance: " << myBank.getBalance() << endl;
    
    return 0;
}