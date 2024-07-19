#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() const = 0; 
};

class Car : public Vehicle {
public:
    void start() const override {
        cout << "Car started." << endl;
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
