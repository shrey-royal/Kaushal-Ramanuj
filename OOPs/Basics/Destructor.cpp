#include<iostream>
using namespace std;

class Car {
    string make;    //company name
    string model;   //model name
    int year;       //year of manufacture
    float price;    //price of the car

public:
    Car(string mke, string m, int y, float p) {
        make = mke;
        model = m;
        year = y;
        price = p;

        cout << "Constructor called for " << model << endl;
    }

    void displayCarDetails() {
        cout << "The all new " << model << " comes from " << make << " and was manufactured in " << year << ". It costs " << price << " lakhs." << endl;
    }

    ~Car() {
        cout << "Destructor called for " << model << endl;
        make = "";
        model = "";
        year = 0;
        price = 0;
    }
};

int main() {
    Car c("Maruti Suzuki", "Swift", 2021, 5.73);
    Car c1("Nexon", "Tata", 2022, 10.5);
    
    
    c.displayCarDetails();
    c1.displayCarDetails();

    return 0;
}
/*
Destructor: It is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.

The main purpose of destructor is to free the resources that the object may have acquired during it's lifetime.


Syntax:
~class_name() {
    // body of destructor
}


*/