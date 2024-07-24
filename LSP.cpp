#include <iostream>
#include <vector>
using namespace std;

class Bird {
public:
    virtual void fly() const {
        cout << "Flying at a normal speed.\n";
    }
};

// Derived class representing a Duck
class Duck : public Bird {
public:
    void fly() const override {
        std::cout << "Flying like a duck.\n";
    }
};

class Ostrich : public Bird {
public:
    void fly() const override {
        std::cout << "Ostriches cannot fly.\n";
    }
};

// Function to make a bird fly
void makeBirdFly(const Bird& bird) {
    bird.fly();
}

int main() {
    Duck duck;
    Ostrich ostrich;

    makeBirdFly(duck);    // Output: Flying like a duck.
    makeBirdFly(ostrich); // Output: Ostriches cannot fly.

    return 0;
}
