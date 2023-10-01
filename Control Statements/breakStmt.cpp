#include<iostream>
using namespace std;

int main() {
    int i = 0;

    while (i < 10) {
        jump:  // label
        cout << i << " ";
        if (i == 5) {
            // break;  // break out of loop
            // continue;  // skip the rest of the loop
            goto jump;  // jump to a label
        }
        i++;
    }

    cout << "\nLoop ended\n";


    return 0;
}