#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "This is a person." << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

int main() {
    Student myStudent;
    myStudent.display(); 
    myStudent.study(); 
    return 0;
}
