#include <iostream>
using namespace std;
// Abstract class
class Animal {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

// Concrete derived classes
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.makeSound();
    cat.makeSound();

    return 0;
}
