// Header files
#include <iostream> // for standard input/output operations
#include <string> // for string operations

// using directive to avoid prefixing with std::
using namespace std;

// main function
int main()
{
    // declaring variables
    int Number1, Number2;
    char Operator;

    // taking input from user
    cout << "Enter two numbers: " << endl;
    cin >> Number1 >> Number2;
    cout << "Enter the Operator: " << endl;
    cin >> Operator;

    // performing operation based on operator
    switch (Operator)
    {
    case '+': // addition
        cout << Number1 << " + " << Number2 << " = " << Number1 + Number2;
        break;
    case '-': // subtraction
        cout << Number1 << " - " << Number2 << " = " << Number1 - Number2;
        break;
    case '*': // multiplication
        cout << Number1 << " * " << Number2 << " = " << Number1 * Number2;
        break;
    case '/': // division
        cout << Number1 << " / " << Number2 << " = " << Number1 / Number2;
        break;
    default: // invalid operator
        cout << "Invalid Operator";
        break;
    }
    return 0;
}