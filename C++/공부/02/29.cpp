#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    static const double PI;
public:
    double getRadius() const { return radius; }
    double getArea() const {
        return (PI * radius * radius);
    }
    double getPerimeter() const {
        return (2 * PI * radius);
    }
    void setRadius(double value) { radius = value; }
};

const double Circle::PI = 3.14;

int main() {
    Circle circle1;
    circle1.setRadius(10);
    cout << "Circle 1:" << endl;
    cout << "Radius : " << circle1.getRadius() << endl;
    cout << "Area : " << circle1.getArea() << endl;
    cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;

    Circle circle2;
    circle2.setRadius(20);
    cout << "Circle 2:" << endl;
    cout << "Radius : " << circle2.getRadius() << endl;
    cout << "Area : " << circle2.getArea() << endl;
    cout << "Perimeter : " << circle2.getPerimeter() << endl;

    return 0;
}