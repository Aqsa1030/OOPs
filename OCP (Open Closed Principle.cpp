#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0; 
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Rectangle" << endl;
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
