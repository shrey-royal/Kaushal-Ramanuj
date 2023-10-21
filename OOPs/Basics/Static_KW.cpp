#include<iostream>
using namespace std;

class RoyalStudent {
    string name;
    enum TYPEOFSTUDENTS{GENERAL=400000, CLUB=700000, ONE2ONE=1500000};
    int fees;

    public:
        static int totalStudents;
        RoyalStudent(string name, int type) {
            this->name = name;
            //here we will set the fees according to the type of student
            if(type == 1) {
                fees = GENERAL;
            } else if(type == 2) {
                fees = CLUB;
            } else if(type == 3) {
                fees = ONE2ONE;
            }
            totalStudents++;
        }

        void show() {
            cout << "Name: " << name << endl;
            cout << "Total Students: " << totalStudents << endl;
        }

        static int getGeneralFees() {
            return GENERAL;
        }

        static int getClubFees() {
            return CLUB;
        }

        static int getOne2OneFees() {
            return ONE2ONE;
        }
};

//we have to declare the static variable outside the class
int RoyalStudent::totalStudents = 0;

int getGeneralFees() {
    return 0;
}

int main() {

    RoyalStudent r1("Kaushal Ramanuj", 2);
    RoyalStudent r2("Himanshu Sorathiya", 1);
    RoyalStudent r3("Jay Vaghasiya", 3);

    r1.show();
    // r2.show();
    // r3.show();

    cout << "General Fees: " << RoyalStudent::getGeneralFees() << endl;
    cout << "Club Fees: " << RoyalStudent::getClubFees() << endl;
    cout << "One2One Fees: " << RoyalStudent::getOne2OneFees() << endl;

    cout << "Total Students: " << RoyalStudent::totalStudents << endl;
    cout << "Gen Fees (Without Parents): " << getGeneralFees() << endl;

    return 0;
}

/*
> Static Keyword in cpp is used to give a special property to a variable or a function.
> It allows to use the variable or function without creating an object of the class.
> Things which are declared as static are stored in the static memory, means they are stored in the memory which is allocated at the time of compilation.

Taskks:
1. Static Member Variables:

   Design a C++ program to create a class called 'MyClass' with a static integer variable named 'staticVar'. Create two instances of this class, 'obj1' and 'obj2'. Set the 'staticVar' of 'obj1' to 42 and display the values of 'staticVar' for both objects. Explain the behavior of static variables in different instances of the same class.

2. Static Member Functions:

   Create a C++ program that defines a class 'MyClass' with a static member function called 'staticFunction'. Use this function to return the value 42 and print the result. Discuss the usage and advantages of static member functions in C++.

3. Static Local Variables:

   Write a C++ function called 'demoStaticLocalVariable' that contains a static local integer variable named 'count'. Call this function multiple times and observe the changes in the value of 'count'. Explain the significance of static local variables and how they maintain their state across function calls.

4. Static Member Initialization:

   Create a C++ class named 'MyClass' with two static integer variables, 'staticVar1' and 'staticVar2'. Initialize 'staticVar1' to 42 and 'staticVar2' to 100 using different methods. Write a program to display the values of these static variables and compare the initialization techniques.

5. Static Class Variables:

   Implement a C++ program to simulate a simple bank account system using a class called 'BankAccount'. Inside this class, declare a static integer variable 'totalAccounts' to keep track of the total number of bank accounts. Create multiple instances of 'BankAccount', open new accounts, and close existing accounts. Display the current value of 'totalAccounts' after each operation. Discuss the role of static class variables in maintaining shared information among objects.

These problem statements will guide you in exploring various aspects of the 'static' keyword in C++ and its applications in different scenarios.

*/