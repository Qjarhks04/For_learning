#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    static constexpr double PI = 3.141592;
public:
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
};

double Circle::getRadius() const {
    return radius;
}
double Circle::getArea() const {
    return (PI*radius*radius);
}
double Circle::getPerimeter() const {
    return (2*PI*radius);
}
void Circle::setRadius(double value) {
    radius = value;
}

int main() {

    double value1, value2;
    cin >> value1 >> value2;

    Circle circle1;
    circle1.setRadius(value1);
    cout << "circle1" << endl;
    cout << circle1.getRadius() << endl;
    cout << circle1.getArea() << endl;
    cout << circle1.getPerimeter() << endl << endl;

    Circle circle2;
    circle2.setRadius(value2);
    cout << "circle2" << endl;
    cout << circle2.getRadius() << endl;
    cout << circle2.getArea() << endl;
    cout << circle2.getPerimeter() << endl;

    return 0;

}