#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptrAnimal;
    Dog dog;

    ptrAnimal = &dog;
    ptrAnimal->makeSound();  // Outputs "Dog barks"

    return 0;
}
