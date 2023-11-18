/*
Constructor Overloading
*/
#include<iostream>
using namespace std;

class Employee {
    int rno;
    string name, desg;

public:
    Employee() {
        this->rno = 0;
        this->name = "\0";
        this->desg = "\0";
    }

    Employee(int rno, string name, string desg) {
        this->rno = rno;
        this->name = name;
        this->desg = desg;
    }

    void display() {
        cout << "\nRoll No.: " << rno << "\nName: " << name << "\nDesignation: " << desg << endl;
    }
};


int main() {
    Employee e1(12, "abc", "xyz"), e2;

    e1.display();
    e2.display();

    return 0;
}