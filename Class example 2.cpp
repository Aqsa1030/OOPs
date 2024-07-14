#include<iostream>
using namespace std;
class car
{
	// Data Members
	string name;
	float height;
	string color;
	string model;
	int year;
    //Function
    public:
	void gearup() {
			cout << "Gear up. " << endl;
	}
	void geardown() {
		cout << "Gear down. " << endl;
	}
	void brake() {
		cout << "Brakes are applied." << endl;
	}
	void accelerate() {
		cout << "Car is accelerated." << endl;
	}

};
int main()
{
	car obj; //class 
	obj.gearup();
	obj.geardown();
	obj.brake();
	obj.accelerate();
	return 0;
}