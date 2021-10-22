#include <iostream>

using namespace std;

class Car {
    public:
        unsigned int id = 3;
        string brand = "Fiat";
        string model = "Multipla";

        void getData();

        Car();

        Car(unsigned int pId, string pBrand, string pModel);
        /*Domyslne wartosci w kontruktorze mają wyższy priorytet niz w klasie*/
};

void Car::getData() {
    cout << "ID: " << id << "\nMarka: " << brand << ", model: " << model << endl << endl;
}

Car::Car() {
    id = 7;
    brand = "Audi";
    model = "A8";
} 

Car::Car(unsigned int pId, string pBrand, string pModel) {
    id = pId;
    brand = pBrand;
    model = pModel;
}



int main() {
    setlocale(LC_CTYPE,"polish");

    Car bmw;
    bmw.getData();
    
    Car opel = Car(11, "Opel", "Tigra");
    opel.getData();

    return 0;
}
