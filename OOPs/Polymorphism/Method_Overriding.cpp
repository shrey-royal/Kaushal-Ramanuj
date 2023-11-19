#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }

    void sleep() {
        cout << "Animal is sleeping..." << endl;
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "Dog is eating..." << endl;
    }

    void sleep() {
        cout << "Dog is sleeping..." << endl;
    }
};


int main() {
    Dog d;

    d.eat();
    d.sleep();
    d.Animal::eat();
    d.Animal::sleep();
}