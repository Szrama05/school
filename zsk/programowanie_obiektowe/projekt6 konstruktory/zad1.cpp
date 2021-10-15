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
	
	Dog pimpek = {"Pimpek", "shitzu", "biały", "brązowy", 0.25, 0.3, 7};
	
	pimpek.sit();
	pimpek.layDown();
	pimpek.shake();
	pimpek.come();
	
	return 0;
}
