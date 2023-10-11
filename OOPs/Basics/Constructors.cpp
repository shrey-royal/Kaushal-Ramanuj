#include<iostream>
using namespace std;

class Calculate {
    int a, b, result;
public:
    Calculate() {    // default constructor
        a = 10;
        b = 20;
        result = 0;
    }

    Calculate(int x, int y) {   // parameterized constructor
        a = x;
        b = y;
        result = 0;
    }


    void add() {
        cout << "Addition is: " << a+b << endl;
    }

    void sub() {
        cout << "Subtraction is: " << a-b << endl;
    }
};



int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculate c(a, b), c1(1, 2), c3;
    c.add();
    c1.add();
    c3.add();

    return 0;
}

/*
what to do if i have to initialize a class data members in the class.
we can do it by using constructors.

what are constructors?
constructors are special member functions of a class with the same name as of the class. and it is used to initialize the objects of its class. it is automatically invoked whenever an object is created. the constructors must be declared in the public section of the class.

syntax:

class_name() {
    // body of constructor
}

example:

class Demo {
    public:
        Demo() {
            cout << "Constructor called" << endl;
        }
};

Three types of constructors:
    > Default Constructor : it is a constructor which doesn't take any argument.
    > Parameterized Constructor : it is a constructor which takes arguments.
    > Copy Constructor : it is a constructor which initializes an object using another object of the same class.


*/



/*
1. Employee Management System: Create a class for an Employee with a default constructor that sets initial values and a parameterized constructor for setting custom attributes such as name, ID, and salary.


Class Diagram:

----------------------------------------
|              Employee                |
----------------------------------------
| - name: String                      |
| - id: int                           |
| - salary: double                    |
----------------------------------------
| + Employee()                        |
| + Employee(name: String,            |
|    id: int, salary: double)         |
| + getName(): String                 |
| + getId(): int                      |
| + getSalary(): double               |
| + setName(name: String): void       |
| + setId(id: int): void              |
| + setSalary(salary: double): void   |
----------------------------------------



*/