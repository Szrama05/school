#include <iostream>

using namespace std;

class Animal {
	private:
		bool vaccination;
	public:
		string name;
		float weight, height;
		string breed;
		string voice;

		void funcPublicAnimal() {
			cout << "Funkcja publiczna klasy Animal\n";
		};

		void funcAnimal() {
			cout << "funkcja Animal" << endl;
		}

		void setVaccination(bool pVaccination) {
			vaccination = pVaccination;
		};

		bool getVaccination() {
			return vaccination;
		};
};

class Dog : public Animal {
	public:
		void aport() {
			cout << "Aportowanie\n";
		}

		void funcAnimal() {
			cout << "funkcja Animal w klasie Dog" << endl;
		}

};

int main() {

	Animal zwierze;
	zwierze.funcPublicAnimal();
	zwierze.setVaccination(1);
	cout << zwierze.getVaccination() << endl;

	Dog burek;
	burek.funcPublicAnimal();
	burek.aport();

	zwierze.funcAnimal();
	burek.funcAnimal();

	burek.voice = "hau hau";
	cout << burek.voice << endl;

    return 0;
}
