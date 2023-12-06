/* 
1. Email Validation
 Problem Statement:
Create a program that validates whether an input string represents a valid email address.
 Sample Test Case:
- Input: "example@email.com"
  - Output: Valid email address
- Input: "invalid_email.com"
  - Output: Invalid email address  
*/

#include<iostream>
#include<string>
using namespace std;

int isValidEmail(const string& email) {
    int foundAt = 0;
    int foundDotAfterAt = 0;
    size_t atIndex = 0;

    for(size_t i=0; i<email.length(); i++) {
        if(email[i] == '@') {
            if(foundAt) return 0;
            foundAt = 1;
            atIndex = i;
        } else if(foundAt && email[i] == '.') {
            foundDotAfterAt = 1;
        }
    }

    if(!foundAt || !foundDotAfterAt || atIndex == 0 || atIndex == email.length() - 1) return 0;
    return 1;
}

int main() {
    string inputEmail;
    cout << "Enter an email address: ";
    cin >> inputEmail;

    if(isValidEmail(inputEmail)) cout << "Valid Email Address" << endl;
    else cout << "Invalid Email Address" << endl;

    return 0;
}