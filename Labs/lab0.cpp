#include <iostream>
#include <string>
// using directive to avoid prefixing with std::
using namespace std;

/* namespace a
{
    void print(void)
    {
        cout << "hello i'm namespace a" << endl;
    }
}

namespace b
{
    void print(void)
    {
        cout << "hello i'm namespace b" << endl;
    }
} */

template <typename T>
T my_max(T a, T b)
{
    return a > b ? a : b;
}

template <typename T1, typename T2>
void print(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    int n;
    cout << "Enter arary size n: " << endl;
    cin >> n;

    int *arr = new int[n];

    for(int i; i <= n; i++)
    {
        arr[i] = i * 2;
    }

    cout << "Array: " << endl;

    for(int i; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

        for(int i; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
/*     int *ptr = new int;
    *ptr = 42;
    cout << *ptr << endl;

    delete ptr; */
    
    //cout << my_max<int>(5, 10) << endl;
    //cout << my_max<double>(3.8, 7.9) << endl;
    //cout << my_max<char>('y', 'z') << endl;
    //print(5 , " ljlk");
    //print(354, 't');


/*     int age1, age2;
    char y;
    cout << "Enter age1, age1, y" << endl;
    cin >> age1 >> age2 >> y;
    cout << "Ages = " << age1+age2 << " the char: " << y << "\n"; 
    a::print();
    b::print(); */

/*     std::cout << "Hello World!" << std::endl;
    int x = 20;
    char y = 'y';

    std::cout << x << " " << y << std::endl;

    int a = 10;
    int b = 10;

    std::cout << "a+b = " << a+b << std::endl; */

    return 0;
}