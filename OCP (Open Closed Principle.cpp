#include <iostream>
using namespace std;
// Base class (closed for modification)
class Shape {
public:
    virtual void draw() const = 0; // Open for extension
};

// Derived classes (open for extension)
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    Shape* shapes[] = { &circle, &rectangle };

    for (auto shape : shapes) {
        shape->draw();
    }

    return 0;
}
