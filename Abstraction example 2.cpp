#include <iostream>
using namespace std;
// Abstract class
class Vehicle {
public:
    virtual void start() const = 0; // Pure virtual function
};

// Concrete derived classes
class Car : public Vehicle {
public:
    void start() const override {
        std::cout << "Car started." << std::endl;
    }
};

class Bike : public Vehicle {
public:
    void start() const override {
        cout << "Bike started." << endl;
    }
};

int main() {
    Car car;
    Bike bike;

    car.start();
    bike.start();

    return 0;
}
