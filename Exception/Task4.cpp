#include<iostream>
#include<string>
using namespace std;

bool isNumeric(const string& str) {
    for(char c : str) {
        if(!(c >= 48 && c <= 57)) {
            return false;
        }
    }
    return true;
}


int main() {
    string input;
    cout << "Enter a numeric value as a string: ";
    cin >> input;

    try {
        if(!isNumeric(input) || input.empty()) {
            throw invalid_argument("Error: Invalid input. Please enter a numeric value.");
        }

        int value = stoi(input);
        cout << "Integer value = " << value << endl;
    } catch(const invalid_argument& e) {
        cout << e.what() << endl;
    } catch(const out_of_range& e) {
        cout << "Error: Out of range for integer conversion." << endl;
    }

    return 0;
}