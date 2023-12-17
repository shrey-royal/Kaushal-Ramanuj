#include<iostream>
//fstream(file stream) = ifstream(input file stream) + ofstream (output file stream)
#include<fstream>
using namespace std;

void writeToFile(string file_name) {
    ofstream file(file_name);
    if(file.is_open()) {
        file << "Hello, this is some data written to the file!";
        file.close();
        cout << "Data written to '" << file_name << "' successfully." << endl;
    } else {
        cout << "Unable to open '" << file_name << "'" << endl;
    }
}

void readFromFile(string file_name) {
    ifstream file(file_name);
    if(file.is_open()) {
        string content;
        while(getline(file, content)) cout << "Content from '" << file_name << "': " << content << endl;        
        file.close();
        cout << "--- EOF ---" << endl;
    } else {
        cout << "Unable to open '" << file_name << "'" << endl;
    }
}

int main() {
    int choice;
    string file_name;
    do {
        system("cls");
        cout << "Choose an option" << endl;
        cout << "1. Write to file" << endl;
        cout << "2. Read from file" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the file name.extension: ";
            cin >> file_name;
            writeToFile(file_name);
            break;
        
        case 2:
            cout << "Enter the file name.extension: ";
            cin >> file_name;
            readFromFile(file_name);
            break;

        case 3:
            cout << "Exiting the program!" << endl;
            break;
        
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
        }

        system("pause");
    } while (choice != 3);
}

/*
Other Operations to try: 

1. Append to a File
2. Check if a File Exists
3. Delete a File
4. Copy Content from One File to Another
5. Rename a File

*/