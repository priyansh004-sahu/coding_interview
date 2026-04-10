#include<iostream>
using namespace std;

class Teacher{
    public:
    // non-parameterized constructor 
    // Teacher() {
    //     cout << "Teacher object created!" << endl;
    // }

    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
        cout << "Teacher object created with parameters!" << endl;
    }
    // properties / data
    string name;
    string dept;
    string subject;
    double salary;

    // methods --> memeber functions
    void changeDept(string newDept){
        dept = newDept;
    }
};


int main() {
    Teacher t1("John Doe", "Engineering", "Computer Science", 50000 );  // constructor is called here
    cout << "Teacher Name from t1: " << t1.name << endl;

    Teacher t2(t1); // copy constructor is called here
    cout << "Teacher Name from t2: " << t2.name << endl;
    

    return 0;
}