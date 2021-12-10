#include <iostream>

using namespace std;

class Vehicle {
	public:
		string brand, model;
		float fluelAmount, capacity;
		unsigned short int numberOfSeats;

		void applyBreakes();

};

class Bus : public Vehicle {
	public:
		unsigned short int numberOfStandingSeats;
};

class Car : public Vehicle {
	public:
};

class Truck : public Vehicle {
	public:	
		int numberOfPallets;
		string semitrailer;
};

int main() {

	Vehicle brum1;
	Bus duzeWrum;
	duzeWrum.numberOfStandingSeats = 3;

    return 0;
}
