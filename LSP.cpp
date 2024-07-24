#include <iostream>
#include <vector>
using namespace std;

class Bird {
public:
    virtual void fly() const {
        cout << "Flying at a normal speed.\n";
    }
};

class Duck : public Bird {
public:
    void fly() const override {
        cout << "Flying like a duck.\n";
    }
};

class Ostrich : public Bird {
public:
    void fly() const override {
        cout << "Ostriches cannot fly.\n";
    }
};

// Function to make a bird fly
void makeBirdFly(const Bird& bird) {
    bird.fly();
}

int main() {
    Duck duck;
    Ostrich ostrich;

    makeBirdFly(duck);    
    makeBirdFly(ostrich); 

    return 0;
}
