#include<iostream>
using namespace std;

class People {
protected:
    string name;
    int age;
    bool gender;

public:
    People() : name("\0"), age(0), gender(0) {}

    People(string name, int age, bool gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    //getter and setter
    string getName() {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    bool getGender() {
        return gender;
    }

    void setGender(bool gender) {
        this->gender = gender;
    }
};

class Student : public People {

    int rno, grade;
    float marks;

public:
    Student() : rno(0), grade(0), marks(0) {}

    Student(int rno, string name, int age, int grade, float marks, bool gender) : People(name, age, gender) {
        this->rno = rno;
        this->grade = grade;
        this->marks = marks;
    }

    //getter and setter
    int getRno() {
        return rno;
    }

    void setRno(int rno) {
        this->rno = rno;
    }

    int getGrade() {
        return grade;
    }

    void setGrade(int grade) {
        this->grade = grade;
    }

    float getMarks() {
        return marks;
    }

    void setMarks(float marks) {
        this->marks = marks;
    }
};

class Employee : public People {
    
    int empId;
    float salary;

public:
    Employee(int empId, string name, int age, float salary, bool gender) : People(name, age, gender) {
        this->empId = empId;
        this->salary = salary;
    }

    //getter and setter
    int getEmpId() {
        return empId;
    }

    void setEmpId(int empId) {
        this->empId = empId;
    }

    float getSalary() {
        return salary;
    }

    void setSalary(float salary) {
        this->salary = salary;
    }
};

int main() {
    Student s1(1, "Rahul", 20, 10, 90.5, 1);
    Employee e1(420, "Chachi", 69, 100000, 0);

    cout << s1.getRno() << endl;
    cout << s1.getName() << endl;
    cout << s1.getGrade() << endl;
    cout << s1.getAge() << endl;
    cout << s1.getMarks() << endl;
    s1.getGender()?cout << "Male" : cout << "Female";
    cout << endl << "\n\n\n";
    
    cout << e1.getEmpId() << endl;
    cout << e1.getName() << endl;
    cout << e1.getSalary() << endl;
    cout << e1.getAge() << endl;
    e1.getGender()?cout << "Male" : cout << "Female";
    cout << endl << "\n\n\n";


    return 0;
}