#include <iostream>
#include <cassert>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double radius);
    Circle();
    Circle(const Circle& circle);
    ~Circle();
    void setRadius(double radius);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};

Circle::Circle(double rds)
    :radius(rds) {
        if(radius < 0.0) {
            assert(false);
        }
    }

Circle::Circle()
    :radius(0.0) {}

Circle::Circle(const Circle& circle) 
    :radius(circle.radius) {}

Circle::~Circle() {}

void Circle::setRadius(double value) {
    radius = value;
    if(radius < 0.0) {
        assert(false);
    }
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::getPerimeter() const {
    const double PI = 3.14;
    return (2 * PI * radius);
}

int main() {
    Circle circles[3];

    circles[0] = Circle(3.0);
    circles[1] = Circle(4.0);
    circles[2] = Circle(5.0);

    for(int i = 0; i < 3; i++) {
        cout << "circle[" << i << "]의 정보" << endl;
        cout << "반지름 : " << circles[i].getRadius();
        cout << ", 넓이 : " << circles[i].getArea();
        cout << ", 둘레 : " << circles[i].getPerimeter();
        cout << endl;
    }
    return 0;
}
