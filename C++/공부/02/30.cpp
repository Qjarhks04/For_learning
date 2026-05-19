#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    double getArea();
};
double Circle::getArea() {
    return (3.14 * radius * radius);
}

int main() {

    Circle donut;
    donut.radius = 1;
    cout << "donut 면적은 " << donut.getArea() << endl;

    Circle pizza;
    pizza.radius = 30;
    cout << "pizza 면적은 " << pizza.getArea() << endl;

    return 0;
}