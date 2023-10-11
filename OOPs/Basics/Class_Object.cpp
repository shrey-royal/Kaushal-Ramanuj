#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hey, I am " << name << " and I am " << age << " years old." << endl;
    }

    void scanPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void printPersonDetails() {
        cout << "\nName: " << name << "\t" << "Age: " << age << endl;
    }

    //getter and setter methods
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};


int main() {
    // Person p1;
    // p1.name = "Kaushal";
    // p1.age = 20;
    // p1.introduce();

    // p1.scanPersonDetails("Kaushal", 20);
    // p1.introduce();
    // p1.setName("Kaustubh");
    // p1.introduce();
    // p1.setAge(21);
    // p1.introduce();
    // cout << "Name: " << p1.getName() << endl;
    // cout << "Age: " << p1.getAge() << endl;


    Person p[10];

    cout << "Enter details of 2 people: " << endl;
    for (int i = 0; i < 2; i++) {
        string name;
        int age;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        p[i].scanPersonDetails(name, age);
    }

    cout << "Details of 2 people: " << endl;
    for (int i = 0; i < 2; i++) {
        p[i].introduce();
    }

    //tabular format
    cout << "Details of 2 people: " << endl;
    // cout << "Name\tAge" << endl;
    for (int i = 0; i < 2; i++) {
        // cout << p[i].getName() << "\t" << p[i].getAge() << endl;
        p[i].printPersonDetails();
    }

    return 0;
}

/*
Tasks":
1. class person: 
> name, age, gender, height, weight, address, phone number, email

2. class student:
> name, grade, roll number, maths, science, result(%)

*/