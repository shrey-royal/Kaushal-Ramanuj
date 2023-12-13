#include<iostream>
using namespace std;

class ArithmeticException : public exception {
    const char* str;
public:
    ArithmeticException(const char* str) {
        this->str = str;
    }

    const char* what() const throw() {
        return this->str;
    }
};

float division(int a, int b) {
    if(b == 0) {
        throw ArithmeticException("Divide by Zero");
        // ArithmeticException obj("Divide by Zero");
        // throw obj;
    }
    else return a/b;
}

int main() {
    
    cout << "Before Exception" << endl;
    
    try {
        cout << division(12, 0) << endl;
        // throw ArithmeticException("abcd");
    } catch(const exception& e) {
        cerr << e.what() << '\n';
    }

    cout << "After Exception" << endl;

    return 0;
}