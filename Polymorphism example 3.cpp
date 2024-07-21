#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function (making this class abstract)
    virtual void draw() = 0;
};

// Derived classes
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* shape;

    Circle circle;
    Rectangle rectangle;

    shape = &circle;
    shape->draw();  // Outputs "Drawing Circle"

    shape = &rectangle;
    shape->draw();  // Outputs "Drawing Rectangle"

    return 0;
}
