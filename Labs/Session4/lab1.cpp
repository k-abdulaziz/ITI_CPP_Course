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

class Student : public Person {
private:
    int studentId;

public:
    Student(string name, int age, int id) : Person(name, age), studentId(id) {}

    void displayInfo();
};

class AthleteStudent : public Student {
private:
    string sport;

public:
    AthleteStudent(string name, int age, int id, string sport)
        : Student(name, age, id), sport(sport) {}

    void displayInfo();
};

class Employee : public Person {
private:
    int employeeId;

public:
    Employee(string name, int age, int id) : Person(name, age), employeeId(id) {}

    void displayInfo();
};

int main() {
    Student student1("Ali Mohamed", 20, 4572);
    AthleteStudent athleteStudent1("Hamdi Fathi", 22, 7548, "Football");
    Employee employee1("Mohamed Sayed", 30, 1728);

    student1.displayInfo();
    cout << endl;
    athleteStudent1.displayInfo();
    cout << endl;
    employee1.displayInfo();

    return 0;
}

void Person::displayInfo()
{
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
}

void Student::displayInfo()
{
    cout << "--- Student Information ---" << endl;
    Person::displayInfo();
    cout << "Student ID: " << studentId << endl;
}

void AthleteStudent::displayInfo()
{
    cout << "--- Athlete Student Information ---" << endl;
    Student::displayInfo();
    cout << "Sport: " << sport << endl;
}

void Employee::displayInfo()
{
    cout << "--- Employee Information ---" << endl;
    Person::displayInfo();
    cout << "Employee ID: " << employeeId << endl;
}