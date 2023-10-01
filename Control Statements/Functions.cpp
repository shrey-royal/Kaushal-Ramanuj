/*
1. without return type and without arguments
syntax:
void function_name()
{
    // body of function
}

2. with return type and without arguments
syntax:
return_type function_name()
{
    // body of function
}

3. without return type and with arguments
syntax:
void function_name(data_type variable_name)
{
    // body of function
}

4. with return type and with arguments
syntax:
return_type function_name(data_type variable_name)
{
    // body of function
}

*/

#include<iostream>
using namespace std;

void sum1();
int sum2();
void sum3(int, int);
int sum4(int, int);

int main() {
    
    sum1();
    cout << endl;
    cout << sum2() << endl;
    sum3(10, 20);
    cout << endl;
    cout << sum4(10, 20) << endl;

    return 0;
}

void sum1() {
    int a = 10, b = 20;
    cout << a + b;
}

int sum2() {
    int a = 10, b = 20;
    return a + b;
}

void sum3(int a, int b) {
    cout << a + b;
}

int sum4(int a, int b) {
    return a + b;
}