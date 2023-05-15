#include <iostream>
#include <string>

using namespace std;

// Define a function template that takes two types T1 and T2 as arguments and returns a type T3.
template <typename T1, typename T2, typename T3>
T3 Sum(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    // Call the Sum function with integer arguments and specify that the return type should be integer.
    cout << Sum<int, int, int>(99, 1) << endl;
    
    // Call the Sum function with integer and character arguments and specify that the return type should be integer.
    cout << Sum<int, char, int>(15, '_') << endl;
    
    // Call the Sum function with string arguments and specify that the return type should be string.
    cout << Sum<string, string, string>("Hello", "World") << endl;
    
    // Call the Sum function with double arguments and specify that the return type should be integer.
    cout << Sum<double, double, int>(351.4565, 15.315) << endl;

    return 0;
}
