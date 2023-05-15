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

    School(string name, int students, int maxstudents, int teachers);

    void setName(string name);

    void setNumStudents(int newNumStudents);

    void setMaxNumStudents(int newMaxNumStudents);

    void setNumOfTeachers(int teachers);

    void addStudent(void);

    void addTeacher(void);

    string getName();

    int getNumOfStudents();

    int getMaxStudents();

    int getNumOfTeachers();

    void display();
};

int main() {

    School College("College School", 100, 250, 20);
    School Safwa("Safwa School", 200, 300, 30);

    //College.setNumStudents(300);
    College.setMaxNumStudents(300);
    College.setNumStudents(299);
    College.addStudent();
    College.addTeacher();
    College.display();
    
    Safwa.addStudent(); 
    Safwa.addTeacher();
    Safwa.display();

    return 0;
}

    School::School(string name, int students, int maxstudents, int teachers)
    {
        SchoolName = name;
        NumOfStudents = students;
        MaxStudents = maxstudents;
        NumOfTeachers = teachers;
    }

    // Setter methods
    void School::setName(string name)
    {
        SchoolName = name;
    }

    // NumStudents attribute methods
    void School::setNumStudents(int newNumStudents) {
        if (newNumStudents < 0 || newNumStudents > MaxStudents) {
            cout << "Invalid number of students!" << endl;
            return;
        }
        NumOfStudents = newNumStudents;
    }

    // MaxNumStudents attribute methods
    void School::setMaxNumStudents(int newMaxNumStudents) {
        if (newMaxNumStudents < 0) {
            cout << "Invalid maximum number of students!" << endl;
            return;
        }
        MaxStudents = newMaxNumStudents;
        if (NumOfStudents > MaxStudents) {
            NumOfStudents = MaxStudents;
        }
    }

    void School::setNumOfTeachers(int teachers)
    {
        NumOfTeachers = teachers;
    }

    void School::addStudent(void)
    {
        if (NumOfStudents < MaxStudents) {
            NumOfStudents++;
        }
        else
        {
            cout << "Maximum number of students reached!" << endl;
            return;
        }
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
