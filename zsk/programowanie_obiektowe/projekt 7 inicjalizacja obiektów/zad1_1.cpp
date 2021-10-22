#include <iostream>

using namespace std;

class Car {
    public:
        unsigned int id = 3;
        string brand = "Fiat";
        string model = "Multipla";

        void getData();

        Car(unsigned int pId = 10, string pBrand = "FIAT", string pModel = "MULTIPLA");
        /*Domyslne wartosci w kontruktorze mają wyższy priorytet niz w klasie*/
};

void Car::getData() {
    cout << "ID: " << id << "\nMarka: " << brand << ", model: " << model << endl << endl;
}

Car::Car(unsigned int pId, string pBrand, string pModel) {
    id = pId;
    brand = pBrand;
    model = pModel;
}

int main() {
    setlocale(LC_CTYPE,"polish");

    Car bmw(13, "BMW", "X6");
    bmw.getData();

    return 0;
}
