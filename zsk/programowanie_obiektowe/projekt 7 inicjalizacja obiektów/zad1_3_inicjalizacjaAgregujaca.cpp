#include <iostream>

using namespace std;

class Car {
    public:
        unsigned int id;
        string brand;
        string model;

        void getData();

        Car();

        Car(unsigned int pId, string pBrand, string pModel);

};

void Car::getData() {
    cout << "ID: " << id << "\nMarka: " << brand << ", model: " << model << endl << endl;
};

Car::Car() {
    id = 0;
    brand = "Marka domyślna";
    model = "Model domyślny";
    cout << "Konstruktor domyślny\n";
}

Car::Car(unsigned int pId, string pBrand, string pModel) {
    id = pId;
    pBrand = pBrand;
    model = pModel;
    cout << "Konstruktor parametryczny\n";
}

int main() {
    setlocale(LC_CTYPE,"polish");
    Car car1 = Car{1, "Ferrari", "F460"};
    car1.getData();
    Car car2;
    car2.getData();

    return 0;
}