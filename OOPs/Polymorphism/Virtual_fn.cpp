#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape..." << endl;
    }
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
Virutal Function is used to achieve runtime polymorphism.

Explaination: When the function is called using a base class pointer, then the function is called according to the object pointed by the pointer. This is called runtime polymorphism.

In the above example, the draw() function is overriden in the derived classes. When the draw() function is called using a base class pointer, then the function is called according to the object pointed by the pointer. This is called runtime polymorphism. 


*/