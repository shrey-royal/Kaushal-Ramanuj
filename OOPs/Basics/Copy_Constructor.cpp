#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age, grade;
    float marks;

    Student() {}    // Default Constructor

    Student(string n, int a, int g, float m) {  // Parameterized Constructor
        name = n;
        age = a;
        grade = g;
        marks = m;
    }

    Student(Student& obj) {   // Copy Constructor
        name = obj.name;
        age = obj.age;
        grade = obj.grade;
        marks = obj.marks;
    }

    void DisplayStudent() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "Marks: " << marks << endl;
    }

    void TabDisplayStudent() {
        cout << name << "\t" << age << "\t" << grade << "\t" << marks << endl;
    }
};

void TabDisplayAllStudent(Student* s, int noOfStudents) {
    cout << "Name\tAge\tGrade\tMarks" << endl;
    for (int i = 0; i < noOfStudents; i++) {
        s[i].TabDisplayStudent();
    }
}

int main() {
    // Student s[10];  //calling default constructor

    // s[0] = Student("Rahul", 12, 7, 90.5); //calling parameterized constructor
    // s[1] = Student("Rohit", 11, 6, 80.5);
    // s[2] = Student("Raj", 10, 5, 70.5);
    // s[3] = Student("Riya", 9, 4, 60.5);
    // s[4] = Student("Rakesh", 8, 3, 50.5);
    // s[5] = Student("Rajesh", 7, 2, 40.5);
    // s[6] = Student("Rajat", 6, 1, 30.5);
    // s[7] = Student("Rajeev", 5, 0, 20.5);
    // s[8] = Student(s[6]);   //calling copy constructor
    // s[9] = s[7];   //calling copy constructor

    // TabDisplayAllStudent(s, 10);


    Student kaushal("Kaushal", 21, 3, 80.5);    //calling parameterized constructor
    Student kaushal2 = kaushal; //calling copy constructor

    kaushal.DisplayStudent();
    kaushal2.DisplayStudent();

    return 0;
}