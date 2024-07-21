#include <iostream>
using namespace std;

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
    shape->draw();  

    shape = &rectangle;
    shape->draw();  
    return 0;
}
