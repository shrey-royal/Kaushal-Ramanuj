include<iostream>
include<string>
using namespace std;

void displayMenu() {
    cout << "===== MENU =====" << std::endl;
    cout << "1. Concatenate strings" << std::endl;
    cout << "2. String length" << std::endl;
    cout << "3. Access character in string" << std::endl;
    cout << "4. Extract substring" << std::endl;
    cout << "5. Compare strings" << std::endl;
    cout << "6. Find substring in string" << std::endl;
    cout << "7. Exit" << std::endl;
    cout << "================" << std::endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice, index;
    size_t found;
    string str1, str2;

    do {
        system("cls");
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter first String: ";
                getline(cin, str1);
                cout << "Enter second String: ";
                getline(cin, str2);

                cout << "Concatenated Strings: " << str1+str2 << endl;
                break;

            case 2:
                cout << "Enter a string: ";
                getline(cin, str1);

                cout << "Length of string: " << str1.length() << endl;
                break;

            case 3:
                cout << "Enter a string: ";
                getline(cin, str1);
                cout << "Enter the index of the character you want to access: ";
                cin >> index;
                if(index >=0 && index < str1.length()) cout << "Character at index " << index << ": '" << str1[index] << "'" << endl;
                else cout << "Invalid index." << endl;
                break;

            case 4:
                cout << "Enter a string: ";
                getline(cin, str1);
                cout << "Enter the starting index: ";
                int start, length;
                cin >> start;
                cout << "Enter the length of the substring: ";
                cin >> length;
                if(start >=0 && start < str1.length()) cout << "Substring: " << str1.substr(start, length) << endl;
                else cout << "Invalid index." << endl;
                break;

            case 5:
                cout << "Enter first String: ";
                getline(cin, str1);
                cout << "Enter second String: ";
                getline(cin, str2);

                // if(str1 == str2) cout << "Strings are equal." << endl;
                // else cout << "Strings are not equal." << endl;

                if(str1.compare(str2) == 0) cout << "Strings are equal." << endl;
                else cout << "Strings are not equal." << endl;
                break;

            case 6:
                cout << "Enter a string: ";
                getline(cin, str1);
                cout << "Enter a substring to find: ";
                getline(cin, str2);

                found = str1.find(str2);
                if(found != string::npos) cout << "Substring found at index " << found << endl;
                else cout << "Substring not found." << endl;
                break;

            case 7:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }//end switch
        system("pause");
    }while(choice != 7);
    return 0;
}

/*
sample str: Lorem, ipsum dolor sit amet consectetur adipisicing elit. Quis aliquam animi rerum nam ipsum dolores odit, quos at dolorem cum!


Tasks:

 1. Email Validation
 Problem Statement:
Create a program that validates whether an input string represents a valid email address.
 Sample Test Case:
- Input: "example@email.com"
  - Output: Valid email address
- Input: "invalid_email.com"
  - Output: Invalid email address

 2. Palindrome Check
 Problem Statement:
Develop a program that checks if an input string is a palindrome (reads the same forwards and backwards).
 Sample Test Case:
- Input: "racecar"
  - Output: Palindrome
- Input: "hello"
  - Output: Not a palindrome

 3. Word Reversal
 Problem Statement:
Write a function that reverses each word in a sentence while keeping the order of words intact.
 Sample Test Case:
- Input: "Hello world, how are you?"
  - Output: "olleH dlrow, woh era ?uoy"

 4. Vowel Count
 Problem Statement:
Create a program that counts the number of vowels in a given string.
 Sample Test Case:
- Input: "Hello, how are you?"
  - Output: 7 (count of vowels)

 5. String Concatenation
 Problem Statement:
Develop a function that concatenates two strings and removes any duplicate characters.
 Sample Test Case:
- Input: "apple", "orange"
  - Output: "apleorng"


*/