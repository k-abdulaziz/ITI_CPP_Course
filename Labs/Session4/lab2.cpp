#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string Name;
    int Age;

public:
    Person(string name, int age) : Name(name), Age(age) {}

    void displayInfo();
};

class Student : virtual public Person {
private:
    int studentId;

public:
    Student(string name, int age, int id) : Person(name, age), studentId(id) {}

    void displayInfo();
};

class Employee : public Person {
protected:
    int employeeId;

public:
    Employee(string name, int age, int id) : Person(name, age), employeeId(id) {}

    void displayInfo();
};

class Multitasker : public Student, public Employee {
private:
    string sport;

public:
    Multitasker(string name, int age, int studentId, int employeeId, string sport)
        : Person(name, age), Student(name, age, studentId), Employee(name, age, employeeId), sport(sport) {}

    void displayInfo();
};

class MultiMultiTasker : public Multitasker {
private:
    string additionalInfo;

public:
    MultiMultiTasker(string name, int age, int studentId, int employeeId, string sport, string info)
        : Person(name, age), Multitasker(name, age, studentId, employeeId, sport), additionalInfo(info) {}

    void displayInfo();
};

int main() {
    Student student1("Ali Mohamed", 20, 4572);
    Employee employee1("Mohamed Sayed", 30, 1728);
    Multitasker multitasker1("Omar Roshdy", 25, 1234, 5678, "Volleyball");
    MultiMultiTasker multimultitasker1("John Doe", 22, 9876, 5432, "Basketball", "Additional information");

    student1.displayInfo();
    cout << endl;
    employee1.displayInfo();
    cout << endl;
    multitasker1.displayInfo();
    cout << endl;
    multimultitasker1.displayInfo();

    return 0;
}

void Person::displayInfo() {
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
}

void Student::displayInfo() {
    cout << "--- Student Information ---" << endl;
    Person::displayInfo();
    cout << "Student ID: " << studentId << endl;
}

void Employee::displayInfo() {
    cout << "--- Employee Information ---" << endl;
    Person::displayInfo();
    cout << "Employee ID: " << employeeId << endl;
}

void Multitasker::displayInfo() {
    cout << "--- Multitasker Information ---" << endl;
    Student::displayInfo();
    cout << "Employee ID: " << employeeId << endl;
    cout << "Sport: " << sport << endl;
}

void MultiMultiTasker::displayInfo() {
    cout << "--- MultiMultiTasker Information ---" << endl;
    Multitasker::displayInfo();
    cout << "Additional Info: " << additionalInfo << endl;
}
