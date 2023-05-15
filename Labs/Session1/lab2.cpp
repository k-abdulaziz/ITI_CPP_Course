#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

namespace shapes
{
    float area;
    float circum;
    namespace circle
    {
        float radius;
        void get_input(void)
        {
            cout << "Enter radius: " << endl;
            cin >> radius;
        }
        void calc(void)
        {
            area = M_PI * radius * radius;
            circum = 2 * M_PI * radius;
        }
    }
    namespace triangle
    {
        float base;
        float height;
        void get_input(void)
        {
            cout << "Enter base and height: " << endl;
            cin >> base >> height;
        }
        void calc(void)
        {
            area = 0.5 * base * height;
            circum = base + 2 * sqrt((base * base / 4) + (height * height));
        }
    }
    namespace rectangle
    {
        float side1;
        float side2;
        void get_input(void)
        {
            cout << "Enter sides: " << endl;
            cin >> side1 >> side2;
        }
        void calc(void)
        {
            area = side1 * side2;
            circum = 2 * side1 + 2 * side2;
        }
    }
    void print(void)
    {
        cout << "Area = " << area << endl;
        cout << "Circum = " << circum << endl;
    }
}

using namespace shapes;

int main(void)
{
    char shape;
    cout << "Enter the shape character: " << endl;
    cin >> shape;

    if(shape == 'c')
    {
        circle::get_input();
        circle::calc();
        shapes::print();
    }
    else if(shape == 't')
    {
        triangle::get_input();
        triangle::calc();
        shapes::print();
    }
    else if(shape == 'r')
    {
        rectangle::get_input();
        rectangle::calc();
        shapes::print();
    }
    else
    {
        cout << "Invalid character" << endl;
    }

    return 0;
}