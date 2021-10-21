#include <iostream>

using namespace std;

class Dog {
	public:
		string name;
		string breed;
		
		string color;
		string eyeColor;
		
		float height;
		float length;
		float weight;
		
		void sit();
		void layDown();
		void shake();
		void come();

        Dog(string name, string breed);

		Dog();

		Dog(string name, string breed, string color, string eyeColor, float height, float length, float weight);

};

Dog::Dog(string name, string breed) {
	Dog::name = name;
	Dog::breed = breed;
};

Dog::Dog(){};

Dog::Dog(string name, string breed, string color, string eyeColor, float height, float length, float weight) {
	Dog::name = name;
	Dog::breed = breed;
	Dog::color = color;
	Dog::eyeColor = eyeColor;
	Dog::height = height;
	Dog::length = length;
	Dog::weight = weight;
};

void Dog::sit() {
	cout << "Pies siada\n";
}

void Dog::layDown() {
	cout << "Pies leży\n";
}

void Dog::shake() {
	cout << "Pies merda ogonem\n";
}

void Dog::come() {
	cout << "Pies podchodzi\n";
}



int main() {
	setlocale(LC_CTYPE, "polish");
	
	Dog pimpek("Pimpek", "kundel");
	
	pimpek.sit();
	pimpek.layDown();
	pimpek.shake();
	pimpek.come();

	Dog fafik("fafik", "kundel", "biały", "brązowy", 12, 15, 16);

	fafik.sit();
	fafik.layDown();
	fafik.shake();
	fafik.come();



	return 0;
}