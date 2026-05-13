#include <iostream>
#include <cassert>
using namespace std;

class Rectangle {
private:
    double length;
    double height;
    static int count;
public:
    Rectangle(double length, double height);
    Rectangle();
    ~ Rectangle();
    void print() const;
    Rectangle(const Rectangle& rect);
    static int getCount();
};

int Rectangle::count = 0;

void Rectangle::print() const {
    cout << length << "*" << height << endl;
}

Rectangle::Rectangle(double len, double hgt)
    :length(len), height(hgt) {
        if(length < 0.0 || height < 0.0) {
            cout << "값 오류";
            assert(false);
     }
    count++;
}
Rectangle::Rectangle()
    :length(1.0), height(1.0) {
        count++;
    }

Rectangle::Rectangle(const Rectangle& rect)
    :length(rect.length), height(rect.height) {
        count++;
}
Rectangle :: ~Rectangle() {
    cout << count << endl;
    count++;
}

int Rectangle::getCount() {
    return count;
}

int main() { {
        Rectangle rect1(3.2, 1.2);
        rect1.print();

        Rectangle rect2(1.5, 2.1);
        rect2.print();

        Rectangle rect3;
        rect3.print();

        Rectangle rect4(rect1);
        rect4.print();

        Rectangle rect5(rect2);
        rect5.print();

        cout << "객체의 수 : " << rect5.getCount() << endl;
        cout << "객체의 수 : " << Rectangle::getCount() << endl;
    }
    
    cout << "객체의 수 : " << Rectangle::getCount() << endl;
    return 0;
}