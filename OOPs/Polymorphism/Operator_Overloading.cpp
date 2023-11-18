#include<iostream>
using namespace std;

class CustomClass {
private:
    int value;

public:
    CustomClass(int val) {
        this->value = val;
    }

    int getValue() {
        return value;
    }

    //oveload the bitwise AND operator (and -> or)
    CustomClass operator& (const CustomClass& otherObj) const {
        return CustomClass(value | otherObj.value);
    }

    //oveload the + operator
    CustomClass operator+ (CustomClass otherObj) {
        return CustomClass(value - otherObj.value);
    }

    void operator++ () {
        value+=2;
    }
};

int main() {
    CustomClass a(5);
    CustomClass b(3);

    CustomClass result = a & b;

    // cout << (5&3) << endl;
    // cout << result.getValue() << endl;

    // result = a+b;
    // cout << result.getValue() << endl;

    ++result;
    cout << result.getValue() << endl;


    return 0;
}