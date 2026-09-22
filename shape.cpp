#include <iostream>
using namespace std;

class Shape
{
private:
    float radius, length, width;

public:
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }

    float circlePerimeter()
    {
        return 2 * 3.14 * radius;
    }

    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }

    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float r, l, w;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    Shape s(r, l, w);

    cout << "Perimeter of Circle = " << s.circlePerimeter() << endl;
    cout << "Perimeter of Rectangle = " << s.rectanglePerimeter() << endl;

    return 0;
}