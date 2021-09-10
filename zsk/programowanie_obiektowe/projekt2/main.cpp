#include <iostream>

using namespace std;

class Rectangle {
	public:
		float width, height;
		
		float showArea();
		float showCircuit();
		void showAllData();
};

	float Rectangle::showArea() {
		return width * height;
	}
	
	float Rectangle::showCircuit() {
		return (2 * width) + (2 * height);
	}
	
	void Rectangle::showAllData() {
		cout << "D³ugoœæ boku 1: " << width 
			 << "\nD³ugoœæ boku 2: " << height
			 << "\nPole wynosi: " << showArea()
			 << "\nObwód wynosi: " << showCircuit();
	}

int main(int argc, char** argv) {

	setlocale(LC_CTYPE, "polish");

	Rectangle prostokat1;
	
	cout << "Podaj d³ugoœæ: ";
	cin >> prostokat1.width;
	
	cout << "Podaj szerokoœæ: ";
	cin >> prostokat1.height;
	
	prostokat1.showAllData();
	

	return 0;
}
