#include<iostream>
using namespace std;

class Car {
    string make, model; //instance variables
    int year;        //instance variable
    float price;    //instance variable

public:
    Car(string make, string model, int year, float price) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->price = price;
    }

    void display() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << "\n\n";
    }
};


int main() {
    Car c1("Toyota", "Camry", 2015, 25000);
    c1.display();

    Car c2("Honda", "Accord", 2017, 30000);
    c2.display();
    
    
    return 0;
}


/*
this pointer is used to refer to the current object in a member function.

to refer the current class' instance variable, we use this pointer.
*/