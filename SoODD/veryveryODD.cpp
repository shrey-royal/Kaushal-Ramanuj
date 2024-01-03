#include<iostream>
using namespace std;

int countSetBits(const string& binaryNum) {
    int count = 0;
    for(char bit : binaryNum) {
        if(bit == '1') count++;
    }
    return count;
}

bool checkEvenParity(const string& binaryNum) {
    int numSetBits = countSetBits(binaryNum);
    return numSetBits%2 == 0;
}

string fixEvenParity(string binaryNum) {
    int numSetBits = countSetBits(binaryNum);
    if(numSetBits % 2 != 0) binaryNum += '1';

    return binaryNum;
}

string fixOddParity(string binaryNum) {
    int numSetBits = countSetBits(binaryNum);
    if (numSetBits % 2 == 0) binaryNum += '1';
    
    return binaryNum;
}

bool checkOddParity(const string& binaryNum) {
    int numSetBits = countSetBits(binaryNum);
    return numSetBits%2 != 0;
}

int main() {
    string binaryNum;
    cout << "Enter a binary number: ";
    cin >> binaryNum;

    int choice;
    do {
        system("cls");
        cout << "\nChoose error detection type:\n";
        cout << "\n1. Even Parity\n";
        cout << "\n2. Odd Parity\n";
        cout << "Enter your choice(1 or 2): ";
        cin >> choice;
    } while(choice != 1 && choice != 2);

    switch (choice)
    {
        case 1:
            if(!checkEvenParity(binaryNum)) {
                cout << "Error: Even Parity not satisfied!\n";
                cout << "Fixing the even parity...\n";
                binaryNum = fixEvenParity(binaryNum);
                cout << "Corrected binary number with even parity: " << binaryNum << endl;
            } else {
                cout << "No error: Even parity satisfied.\n";
            }
            break;

        case 2:
            if(!checkOddParity(binaryNum)) {
                cout << "Error: Odd Parity not satisfied!\n";
                cout << "Fixing the odd parity...\n";
                binaryNum = fixOddParity(binaryNum);
                cout << "Corrected binary number with odd parity: " << binaryNum << endl;
            } else {
                cout << "No error: Odd parity satisfied.\n";
            }
    }

    return 0;
}