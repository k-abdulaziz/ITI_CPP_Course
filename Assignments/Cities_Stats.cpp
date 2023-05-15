/**
 * @file City_Stats.cpp
 * @brief Declaration of the CityInfo struct and its member functions.
 * 
 * This file contains the declaration of the CityInfo struct, which represents
 * information about a city such as its population, number of families, number
 * of workers, and number of students. The struct also includes member functions
 * for getting user input, editing data, clearing data, and displaying data.
 * 
 * @author Khaled Abdulaziz
 * @date 10/5/2023
 */


#include <iostream> // for input/output operations
#include <cstdlib>  // for standard library functions
#include <string>   // for using strings

using namespace std;

namespace Dakahlia // namespace declaration
{
    struct CityInfo // struct declaration for city information
    {
        string Name;                     // name of the city
        int Population, NumofFamilies,   // population, number of families,
            NumofWorkers, NumofStudents; // number of workers, and number of students

        void Get_Input(void) // method to get input for city information
        {
            cout << "Enter Population: " << endl; 
            cin >> Population;               
            cout << "Enter Number of Families: " << endl; 
            cin >> NumofFamilies;                    
            cout << "Enter Number of Workers: " << endl; 
            cin >> NumofWorkers;                    
            cout << "Enter Number of Students: " << endl; 
            cin >> NumofStudents;
            
            cout << "Data was inputted successfully" << endl;
            
            system("pause");                          
        }

        void Edit_Data(void) // method to edit city information
        {
            int choice; // variable to hold user's choice
            cout << "____________________________" << endl;
            cout << "1. Edit Population" << endl;
            cout << "2. Edit Number of Families" << endl;
            cout << "3. Edit Number of Workers" << endl;
            cout << "4. Edit Number of Students" << endl;
            cout << "5. Return" << endl;
            cout << "____________________________" << endl;
            cout << "Choose an option to edit: " << endl; // prompt to choose an option
            cin >> choice;                                // read user's choice

            switch (choice) // switch case to perform specific editing based on user's choice
            {
            case 1:
                cout << "Enter new Population: " << endl; 
                cin >> Population;
                break;                       
            case 2:
                cout << "Enter new Number of Families: " << endl; 
                cin >> NumofFamilies;                             
                break;
            case 3:
                cout << "Enter new Number of Workers: " << endl; 
                cin >> NumofWorkers;                             
                break;
            case 4:
                cout << "Enter new Number of Students: " << endl;
                cin >> NumofStudents;                             
                break;
            case 5:
                return; 
            default:
                cout << "Invalid choice." << endl;
                break;
            }
        }

        void Clear_Data(void) // method to clear city information
        {
            Population = 0;
            NumofFamilies = 0;
            NumofWorkers = 0;
            NumofStudents = 0;
            
            cout << "Data was cleared successfully" << endl;

            system("pause");                          
        }

        // Method to display the city data
        void Display_Data(void)
        {
            cout << "Population: " << Population << endl;
            cout << "Number of Families: " << NumofFamilies << endl;
            cout << "Number of Workers: " << NumofWorkers << endl;
            cout << "Number of Students: " << NumofStudents << endl;
        }
    };

    namespace Talkha {

        CityInfo Talkha_Data;

        void Init_Name(void)
        {
            Talkha_Data.Name = "Talkha";
        };
    }

    namespace Mansoura
    {
        CityInfo Mansoura_Data;

        void Init_Name(void)
        {
            Mansoura_Data.Name = "Mansoura";
        };
    }

    namespace Belqas
    {
        CityInfo Belqas_Data;

        void Init_Name(void)
        {
            Belqas_Data.Name = "Belqas";
        };
    }

    void City_Menu(CityInfo& City)
    {
        int choice;
        do
        {
            system("cls");
            cout << "Welcome to " << City.Name << " !" << endl;
            cout << "____________________" << endl;
            cout << "1. Insert Data" << endl;
            cout << "2. Edit Data" << endl;
            cout << "3. Display Data" << endl;
            cout << "4. Clear Data" << endl;
            cout << "5. Return" << endl;
            cout << "____________________" << endl;
            cout << "Select an Option: " << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                City.Get_Input();
                break;
            case 2:
                City.Edit_Data();
                system("pause");
                break;
            case 3:
                City.Display_Data();
                system("pause");
                break;
            case 4:
                City.Clear_Data();
                break;
            case 5:
                system("cls");
                return;
            default:
                cout << "Invalid Option!" << endl;
                break;
            }
        } while (choice != 5);
    }
}

//template <typename T1, typename T2>
int Sum_of_Students(int city1, int city2, int city3)
{
    return (city1 + city2 + city3);
}

void Main_Menu(void)
{
    system("cls");
    int choice;
    int sum;
    do
    {
        cout << "Welcome to Dakahlia Database System: " << endl;
        cout << "1. Talkha" << endl;
        cout << "2. Mansoura" << endl;
        cout << "3. Belqas" << endl;
        cout << "4. Sum of Students" << endl;
        cout << "5. Exit" << endl;
        cout << "Select an Option: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            Dakahlia::City_Menu(Dakahlia::Talkha::Talkha_Data);
            break;
        case 2:
            Dakahlia::City_Menu(Dakahlia::Mansoura::Mansoura_Data);
            break;
        case 3:
            Dakahlia::City_Menu(Dakahlia::Belqas::Belqas_Data);
            break;
        case 4:
            sum = Sum_of_Students(Dakahlia::Talkha::Talkha_Data.NumofStudents, 
                                  Dakahlia::Mansoura::Mansoura_Data.NumofStudents, 
                                  Dakahlia::Belqas::Belqas_Data.NumofStudents);
            cout << "Number of Students: " << sum << endl;
            system("pause");
            break;
        case 5:
            return;
        default:
            cout << "Invalid Option!" << endl;
            break;
        }
    } while (choice != 5);
}

int main(void)
{
    Dakahlia::Talkha::Init_Name();
    Dakahlia::Mansoura::Init_Name();
    Dakahlia::Belqas::Init_Name();

    Main_Menu();

    return 0;
}