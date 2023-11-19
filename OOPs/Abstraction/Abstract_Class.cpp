#include<iostream>
using namespace std;

class Shape {   //abstract class because of the pure virtual function
public:
    virtual void draw() = 0;    //pure virtual function
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle..." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle..." << endl;
    }
};


int main() {
    Shape *s;
    Rectangle r;
    Circle c;

    s = &r;
    s->draw();
    s = &c;
    s->draw();

    return 0;
}

/*
Abstraction: Abstraction is the process of hiding the implementation details and showing only the functionality to the user. In other words, it deals with the outside view of an object (interface). The only good example of abstraction is a class. You don't know how the class does, but you know what it does. For example, when you call the sort() function, you give the function a list of numbers and it sorts the numbers for you. You don't know how the function sorts the numbers, but you know what it does. This is abstraction.

Task: 
1. Shape Hierarchy: Create a hierarchy of geometric shapes (e.g., Circle, Square, Triangle) with a base class 'Shape'. Define a virtual function 'calculateArea()' in the base class and override it in each derived class to calculate the area of each shape.

*/