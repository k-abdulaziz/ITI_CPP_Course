#include <iostream>
#include <string>

using namespace std;

#define MAX_PATIENTS 100

class Patient
{
private:
    int patient_id;
    string patient_name;
    string patient_gender;
    int patient_age;
    string patient_blood_group;

public:
    Patient() : patient_id(0), patient_name(""), patient_gender(""), patient_age(0), patient_blood_group("") {} // Default constructor

    Patient(int id, string name, string gender, int age, string blood_group)
        : patient_id(id), patient_name(name), patient_gender(gender), patient_age(age), patient_blood_group(blood_group) {}

    int getPatientID() const;
    string getPatientName() const;
    string getPatientGender() const;
    int getPatientAge() const;
    string getPatientBloodGroup() const;
    void display() const;
};

class Hospital
{
private:
    string hospital_name;
    string hospital_address;
    string hospital_phone_number;
    int hospital_capacity;
    int hospital_patients_count;
    int hospital_doctors_count;
    int hospital_nurses_count;
    Patient patients[MAX_PATIENTS];

public:
    Hospital() : hospital_name(""), hospital_address(""), hospital_phone_number(""), hospital_capacity(0), hospital_patients_count(0), hospital_doctors_count(0), hospital_nurses_count(0) {}

    Hospital(string name, string address, string phone_number, int capacity, int patients_count, int doctors_count, int nurses_count)
        : hospital_name(name), hospital_address(address), hospital_phone_number(phone_number), hospital_capacity(capacity), hospital_patients_count(patients_count), hospital_doctors_count(doctors_count), hospital_nurses_count(nurses_count) {}

    void addPatient(const Patient& p);
    void removePatient(int id);
    void displayHospitalInfo();
    void displayPatients();
};

int main()
{
    // Create hospitals
    Hospital DarAlFouad("Dar Al Fouad", "Cairo", "+02 2145 1548", 350, 0, 35, 30);
    Hospital AlKasrAlAiny("Al Kasr Al Ainy", "Giza", "+02 1545 2415", 500, 0, 50, 60);

    // Create patients
    Patient patient1(125, "Ali Sayed", "male", 29, "O-");
    Patient patient2(100, "Manal Mahmoud", "female", 39, "O-");
    Patient patient3(136, "Omar Mohamed", "male", 59, "O+");

    // Add patients to DarAlFouad
    DarAlFouad.addPatient(patient1);
    DarAlFouad.addPatient(patient2);

    // Add patients to AlKasrAlAiny
    AlKasrAlAiny.addPatient(patient3);

    // Display patients in DarAlFouad
    DarAlFouad.displayPatients();
    DarAlFouad.displayHospitalInfo();

    // Display patients in AlKasrAlAiny
    AlKasrAlAiny.displayPatients();
    AlKasrAlAiny.displayHospitalInfo();

    return 0;
}

int Patient::getPatientID() const
{
    return patient_id;
}

string Patient::getPatientName() const
{
    return patient_name;
}

string Patient::getPatientGender() const
{
    return patient_gender;
}

int Patient::getPatientAge() const
{
    return patient_age;
}

string Patient::getPatientBloodGroup() const
{
    return patient_blood_group;
}

void Patient::display() const
{
    cout << "ID: " << getPatientID() << endl;
    cout << "Name: " << getPatientName() << endl;
    cout << "Gender: " << getPatientGender() << endl;
    cout << "Age: " << getPatientAge() << endl;
    cout << "Blood Group: " << getPatientBloodGroup() << endl;
}

void Hospital::addPatient(const Patient &p)
{
    if (hospital_patients_count < MAX_PATIENTS)
    {
        patients[hospital_patients_count] = p;
        hospital_patients_count++;
        cout << "Patient added to the hospital." << endl;
    }
    else
    {
        cout << "Hospital is full. Cannot add more patients." << endl;
    }
}

void Hospital::removePatient(int id)
{
    int index = -1;
    for (int i = 0; i < hospital_patients_count; i++)
    {
        if (patients[i].getPatientID() == id)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        for (int i = index; i < hospital_patients_count - 1; i++)
        {
            patients[i] = patients[i + 1];
        }
        hospital_patients_count--;
        cout << "Patient with ID " << id << " removed from the hospital." << endl;
    }
    else
    {
        cout << "Patient with ID " << id << " not found in the hospital." << endl;
    }
}

void Hospital::displayHospitalInfo()
{
    cout << "------------------------------" << endl;
    cout << "         HOSPITAL_INFO        " << endl;
    cout << "------------------------------" << endl;
    cout << "Name: " << hospital_name << endl;
    cout << "Address: " << hospital_address << endl;
    cout << "Phone Number: " << hospital_phone_number << endl;
    cout << "Capacity: " << hospital_capacity << endl;
    cout << "Number of Patients: " << hospital_patients_count << endl;
    cout << "Number of Doctors: " << hospital_doctors_count << endl;
    cout << "Number of Nurses: " << hospital_nurses_count << endl;
    cout << "--------------------------------" << endl;
}

void Hospital::displayPatients()
{
    if (hospital_patients_count > 0)
    {
        cout << "Patients in " << hospital_name << ":" << endl;
        cout << "***************************" << endl;
        for (int i = 0; i < hospital_patients_count; i++)
        {
            patients[i].display();
            cout << "-----------------------" << endl;
        }
    }
    else
    {
        cout << "No patients in the hospital." << endl;
    }
}