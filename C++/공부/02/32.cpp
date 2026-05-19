//ex7-4

#include <iostream>
#include <cassert>
using namespace std;

class Rectangle {
private:
    double length, height;
public:
    Rectangle(double length, double height);
    Rectangle(const Rectangle& rect);
    ~Rectangle();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};

Rectangle::Rectangle(double len, double hgt)
    :length(len), height(hgt) {
        if(len <= 0.0 || hgt <= 0.0) {
            cout << "error";
            assert(false);
        }
    }

Rectangle::Rectangle(const Rectangle& rect)
    :length(rect.length), height(rect.height) {}

Rectangle::~Rectangle() {}

double Rectangle::getArea() const {
    return (length * height);
}

double Rectangle::getPerimeter() const {
    return (length + height) * 2;
}

void Rectangle::print() const {
    cout << length << " * " << height << endl;
}

int main() {

    Rectangle r1(5, 4.2);
    cout << "Rectangle 1 : ";
    r1.print();
    cout << r1.getArea() << endl;
    cout << r1.getPerimeter() << endl << endl;

    Rectangle r2(10, 2.7);
    cout << "Rectangle 2 : ";
    r2.print();
    cout << r2.getArea() << endl;
    cout << r2.getPerimeter() << endl << endl;

    Rectangle r3(r2);
    cout << "Rectangle 3 : ";
    r3.print();
    cout << r3.getArea() << endl;
    cout << r3.getPerimeter() << endl;

    return 0;
}