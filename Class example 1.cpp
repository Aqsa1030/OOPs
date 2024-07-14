#include<iostream>
using namespace std;

class Aqsa
{
    // Data members
    string name;
    int age;
    string address;
    float height;

public:
    //functions
    void learn() {
        cout << "I am Learning oops." << endl;
    }
    void walk() {
        cout << "I am walking." << endl;
    }

    void eat() {
        cout << "I am eating apples." << endl;
    }
};

int main() {
    Aqsa obj;  //object of class

    obj.learn(); 
    obj.walk();   
    obj.eat();
    return 0;
}
