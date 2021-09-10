#include <iostream>

using namespace std;

class Worker {
	public:
//deklaracja zmiennych cz³onkowskich (pól, w³aœciwoœci, cech)
		string name, surname, nationality;
		//unsigned short int age;
		unsigned short int birthday;
		float height;
		char gender;
		
//definicja funkcji cz³onkowskiej (metody)
		void showSurname() {
			cout << "Nazwisko pracownika: " << surname << endl;
		};
		
//deklaracja (prototyp) metody
		void showName();
		void showNameAndSur();
		void showAllData();
		
};

//definicja metody showNameAndSur
	void Worker::showNameAndSur() {
		cout << "Imiê i nazwisko: " << name << " " << surname << endl;	
	};
	
	void Worker::showName() {
		cout << "Imiê: " << name << endl;	
	};
	
	void Worker::showAllData() {
		showNameAndSur();
		cout << "Narodowoœæ: " << nationality << endl 
			 << "Rok urodzenia: " << birthday << ", wzrost: " << height << "cm" << endl
			 << "P³eæ: ";
		switch(gender) {
			case 'm': 
				cout << "mê¿czyzna";
				break;
			case 'w': 
				cout << "kobieta";
				break;
			default:
				cout << "-";
				break;
		}
	}
	

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Worker pracownik1;
	pracownik1.name = "Krystian";
	pracownik1.surname = "Nowak";
	pracownik1.birthday = 1995;
	pracownik1.nationality = "Polska";
	pracownik1.height = 175.34;
	pracownik1.gender = 'm';
	//cout << pracownik1.name;
	//pracownik1.showSurname();
	//pracownik1.showNameAndSur();
	pracownik1.showAllData();
	
	return 0;
}
