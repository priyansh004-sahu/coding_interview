#include<iostream>
using namespace std;

class Teacher{
    public:
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
    Teacher t1;

    t1.name = "John Doe";
    t1.subject = "Computer Science";
    t1.dept = "Engineering";
    t1.salary = 50000;
    cout << "Teacher Name: " << t1.name << endl;
    

    return 0;
}