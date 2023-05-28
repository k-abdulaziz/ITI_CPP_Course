#include <iostream>
#include <cmath>

using namespace std;

// This class represents a shape.
class Shape
{
public:
    virtual ~Shape() {}
    virtual void getInput() = 0; // Gets the input for the shape.
    virtual float getArea() = 0; // Gets the area of the shape.
    virtual float getCircumference() = 0; // Gets the circumference of the shape.
};

// This class represents a circle.
class Circle : public Shape
{
private:
    float radius;

public:
    Circle() {}
    Circle(float radius) : radius(radius) {}

    // Gets the input for the circle.
    void getInput() override
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    // Gets the area of the circle.
    float getArea() override
    {
        return M_PI * radius * radius;
    }

    // Gets the circumference of the circle.
    float getCircumference() override
    {
        return 2 * M_PI * radius;
    }
};

// This class represents a triangle.
class Triangle : public Shape
{
private:
    float base;
    float height;

public:
    Triangle() {}
    Triangle(float base, float height) : base(base), height(height) {}

    // Gets the input for the triangle.
    void getInput() override
    {
        cout << "Enter base and height: ";
        cin >> base >> height;
    }

    // Gets the area of the triangle.
    float getArea() override
    {
        return 0.5 * base * height;
    }

    // Gets the circumference of the triangle.
    float getCircumference() override
    {
        return base + 2 * sqrt((base * base / 4) + (height * height));
    }
};

// This class represents a rectangle.
class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle() {}
    Rectangle(float length, float width) : length(length), width(width) {}

    // Gets the input for the rectangle.
    void getInput() override
    {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }

    // Gets the area of the rectangle.
    float getArea() override
    {
        return length * width;
    }

    // Gets the circumference of the rectangle.
    float getCircumference() override
    {
        return 2 * length + 2 * width;
    }
};

// This function gets the shape from the user.
char getShape()
{
    cout << "Enter the shape character: ";
    char shapeChar;
    cin >> shapeChar;

    return shapeChar;
}

// This function calculates the area and circumference of the shape.
void calculateShape(Shape* shape)
{
    shape->getInput();
    cout << "Area = " << shape->getArea() << endl;
    cout << "Circumference = " << shape->getCircumference() << endl;
}

// This is the main function.
int main()
{
    // Gets the shape from the user.
    char shapeChar = getShape();

    // Creates a new shape object.
    Shape* shape = nullptr;

    switch (shapeChar)
    {
        case 'c':
            shape = new Circle();
            break;
        case 't':
            shape = new Triangle();
            break;
        case 'r':
            shape = new Rectangle();
            break;
        default:
            cout << "Invalid character" << endl;
            return 0;
    }

    // Calculates the area and circumference of the shape.
    calculateShape(shape);

    // Deletes the shape object.
    delete shape;

    return 0;
}
