#include<iostream>
using namespace std;

float division(int a, int b) {
    if(b == 0) throw "Divide by Zero Error";
    else return a/b;
}

int main() {
    cout << "Before Exception" << endl;
    
    try {
        cout << "Division is " << division(12, 0) << endl;
    } catch(const char* e) {
        cout << e << endl;
    }
    

    cout << "After Exception" << endl;

    return 0;
}