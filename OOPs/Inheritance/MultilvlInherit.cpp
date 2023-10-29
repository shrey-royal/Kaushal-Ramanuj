#include<iostream>
using namespace std;

class GrandParent {
    public:
        void eat() {
            cout << "GrandParent Eating..." << endl;
        }
        void sleep() {
            cout << "GrandParent Sleeping..." << endl;
        }
};

class Parent : public GrandParent {
    public:
        void earn() {
            cout << "Parent Earning..." << endl;
        }
};

class Child : public Parent {
    public:
        void play() {
            cout << "Child Playing..." << endl;
        }
};


int main() {
    Child c;

    c.play();
    c.earn();
    c.eat();
    c.sleep();

    return 0;
}