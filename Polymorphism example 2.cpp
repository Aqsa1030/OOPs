#include <iostream>
using namespace std;

class Animal {
public:
    // Function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Override Function
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptrAnimal;
    Dog dog;

    ptrAnimal = &dog;
    ptrAnimal->makeSound();  
    return 0;
}
