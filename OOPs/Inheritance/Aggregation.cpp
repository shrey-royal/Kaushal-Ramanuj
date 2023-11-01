#include<iostream>
using namespace std;

class Address {
public:
    int houseNo;
    string street, city, state;
    int pincode;

    // Address() {}

    Address(int houseNo, string street, string city, string state, int pincode) {
        this->houseNo = houseNo;
        this->street = street;
        this->city = city;
        this->state = state;
        this->pincode = pincode;
    }
};

class Employee {
    int id;
    string name, desg, dept;
    float salary;
    Address* address; //Has-A relationship

public:
    Employee(int id, string name, string desg, string dept, float salary, Address* address) {
        this->id = id;
        this->name = name;
        this->desg = desg;
        this->dept = dept;
        this->salary = salary;
        this->address = address;
    }

    void printDetails() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << desg << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
        cout << "Address: " << endl;
        cout << "House No: " << address->houseNo << endl;
        cout << "Street: " << address->street << endl;
        cout << "City: " << address->city << endl;
        cout << "State: " << address->state << endl;
        cout << "Pincode: " << address->pincode << endl;
    }

};


int main() {
    int id, houseNo, pincode;
    string name, desg, dept, street, city, state;
    float salary;

    cout << "Enter Employee Details: " << endl;
    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    cin >> name;
    cout << "Designation: ";
    cin >> desg;
    cout << "Department: ";
    cin >> dept;
    cout << "Salary: ";
    cin >> salary;
    cout << "Address: " << endl;
    cout << "House No: ";
    cin >> houseNo;
    cin.ignore();   //clear the buffer
    cout << "Street: ";
    cin >> street;
    cout << "City: ";
    cin >> city;
    cout << "State: ";
    cin >> state;
    cout << "Pincode: ";
    cin >> pincode;

    Address e_add(houseNo, street, city, state, pincode);
    Employee e(id, name, desg, dept, salary, &e_add);

    // Address a;  //invalid

    cout << endl << "Employee Details: " << endl;
    e.printDetails();

    return 0;
}


// Aggregation is a special form of association where objects have their own life cycle but there is ownership.


/*
Scenario: A Library System

Imagine you are building a library management system, and you want to model the relationships between books, library members, and library branches using aggregation.

1. Book Class:
   - You have a 'Book' class that represents individual books. This class contains information such as the book's title, author, ISBN, and genre.
   
2. Library Branch Class:
   - Next, you have a 'LibraryBranch' class that represents a physical branch of the library. It contains data like the branch name, address, and contact information. This class has an aggregation relationship with books.
   - The 'LibraryBranch' class has a collection of books, which means it aggregates 'Book' objects. Each branch can have multiple books, and these books can be added or removed from the branch's collection.

ClassNames and Attributes:

1. Book Class:
   - Attributes:
     - Title (string)
     - Author (string)
     - ISBN (string)
     - Genre (string)
     
2. LibraryBranch Class:
   - Attributes:
     - Branch Name (string)
     - Address (string)
     - Contact Information (string)
     - Books (aggregation relationship with the 'Book' class, a collection of 'Book' objects)

then print the details of the book and the library branch it belongs to.
*/