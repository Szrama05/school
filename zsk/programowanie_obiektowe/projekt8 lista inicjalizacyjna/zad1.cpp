#include <iostream>

using namespace std;

class Car {
	unsigned int id;
	public:
		
		string brand;
		string model;

		void getData();

		Car();
		Car(string pBrand);
		Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData() {
	cout << "Id: " << id << "\nMarka i model: " << brand << " " << model << endl;
};

Car::Car():
	id {0},
	brand {"MARKA"},
	model {"MODEL"}
{
	cout << "Konstruktor domyślny" << endl;
}

Car::Car(string pBrand):
	brand {pBrand}
{
}

Car::Car(unsigned int pId, string pBrand, string pModel):
	id {pId},
	brand {pBrand},
	model {pModel}
{
	cout << "Konstruktor parametyczny" << endl;
}

int main() {

	Car fiat;
	fiat.getData();

	Car fiat1 = Car();
	fiat1.getData();

	Car fiat2(10, "Fiat", "Multipla");
	fiat2.getData();

	Car fiat3 = Car(20, "Fiat", "Panda");
	fiat3.getData();

	//cout << fiat.id << endl; nie wyświetla

	Car fiat4 = Car("BMW");
	fiat4.getData();

	return 0;
}
