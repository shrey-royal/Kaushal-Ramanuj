#include<iostream>
using namespace std;

void swapByValue(int, int);
void swapByAddress(int*, int*);

int main() {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // cout << "&a: " << &a << "\n&b: " << &b << endl;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    // swapByAddress(&a, &b);
    // cout << "After swapping by value: a = " << a << ", b = " << b << endl;
    return 0;
}

void swapByValue(int a, int b) {    //we are just passing a copy of the values of a and b 
    a = a + b;
    b = a - b;
    a = a - b;

    // cout << "&a: " << &a << "\n&b: " << &b << endl; //&a and &b will be different from the ones in main()

    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
    cout << "After swapping by value: a = " << a << ", b = " << b << endl;
}

void swapByAddress(int* a, int* b) {    //we are passing the address of a and b
    int temp = *a;
    *a = *b;
    *b = temp;

    // cout << "&a: " << a << "\n&b: " << b << endl; //&a and &b will be same as the ones in main()
}