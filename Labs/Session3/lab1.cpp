#include <iostream>
#include <string>

using namespace std;

class School
{
private:
    int NumOfStudents;
    int MaxStudents;
    int NumOfTeachers;

public:
    string SchoolName;
    School() : SchoolName("School"), NumOfStudents(250), MaxStudents(300), NumOfTeachers(10) {} // Default constructor

    School(string name, int students, int maxstudents, int teachers) : SchoolName(name), NumOfStudents(students), MaxStudents(maxstudents), NumOfTeachers(teachers) {} // Default constructor

    void addStudent(void);

    void addTeacher(void);

    string getName();

    int getNumOfStudents();

    int getMaxStudents();

    int getNumOfTeachers();

    void display();

    ~School()
    {
        cout << "End" << endl; // Default constructor
    }
};

int main()
{
    School HLSA;
    School College("College School", 100, 250, 20);
    School Safwa("Safwa School", 200, 300, 30);

    College.addStudent();
    College.addTeacher();
    College.display();

    Safwa.addStudent();
    Safwa.addTeacher();
    Safwa.display();

    HLSA.addStudent();
    HLSA.addTeacher();
    HLSA.display();

    return 0;
}

void School::addStudent(void)
{
    NumOfStudents++;
}

void School::addTeacher(void)
{
    NumOfTeachers++;
}

// Getter methods
string School::getName()
{
    return SchoolName;
}

int School::getNumOfStudents()
{
    return NumOfStudents;
}

int School::getMaxStudents()
{
    return MaxStudents;
}

int School::getNumOfTeachers()
{
    return NumOfTeachers;
}

void School::display()
{
    cout << "School Name: " << getName() << endl;
    cout << "Number of Students: " << getNumOfStudents() << endl;
    cout << "Maximum Number of Students Allowed: " << getMaxStudents() << endl;
    cout << "Number of Teachers: " << getNumOfTeachers() << endl;
}
