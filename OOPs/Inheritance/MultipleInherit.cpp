#include<iostream>
using namespace std;

class Father {
public:
    void property() {
        cout << "Father's Property" << endl;
    }
};

class Mother {
public:
    void Love() {
        cout << "Mother's Love" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void party() {
        cout << "Child is Partying" << endl;
    }
};

int main() {
    Child c;

    c.Love();
    c.property();
    c.party();

    return 0;
}