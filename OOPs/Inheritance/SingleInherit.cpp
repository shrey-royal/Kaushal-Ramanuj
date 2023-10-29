#include<iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "Animal Eating..." << endl;
        }
        void sleep() {
            cout << "Animal Sleeping..." << endl;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "Dog Barking..." << endl;
        }
};


int main() {
    Dog d;

    d.eat();
    d.sleep();
    d.bark();

    return 0;
}