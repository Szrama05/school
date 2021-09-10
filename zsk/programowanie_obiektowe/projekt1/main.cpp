#include <iostream>

using namespace std;

class Worker {
	public:
//deklaracja zmiennych cz³onkowskich (pól, w³aœciwoœci, cech)
		string name;
		string surname;
		int age; //dokoñczyæ, sprawdziæ typ danych
		
//definicja funkcji cz³onkowskiej (metody)
		void showSurname() {
			cout << "\nNazwisko pracownika: " << surname;
		};
		
//deklaracja (prototyp) metody
		void showAllData();
		
};

//definicja metody showAllData
	void Worker::showAllData() {
		cout << "\n\nImiê i nazwisko: " << name << " " << surname << endl;	
	};
	

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Worker pracownik1;
	pracownik1.name = "Krystian";
	pracownik1.surname = "Nowak";
	cout << pracownik1.name;
	pracownik1.showSurname();
	pracownik1.showAllData();
	
	return 0;
}
