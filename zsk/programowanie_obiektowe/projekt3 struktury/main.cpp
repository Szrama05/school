#include <iostream>

using namespace std;

struct Date {
	unsigned short int d, m, rrrr;
};

struct Student {
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Student kowalski {"Janusz", "Nowak", 1000, {17,9,2021}, {1,3,5,2,6}};
	//cout << kowalski.id;
	
	cout << "Dane pracownika:\n" << "Imiê i nazwisko: " << kowalski.name << " "
		 << kowalski.surname << "\nIdentyfikator studenta: " << kowalski.id
		 << "\nData urodzenia: " << kowalski.dateBirthday.d << "-"
		 << kowalski.dateBirthday.m << "-" << kowalski.dateBirthday.rrrr
		 << "\nOceny studenta z informatyki:";
		 
		 /*<< "1. ocena: "<<kowalski.gradeInformatics[0]
		 << "\n2. ocena: "<<kowalski.gradeInformatics[1]
		 << "\n3. ocena: "<<kowalski.gradeInformatics[2]
		 << "\n4. ocena: "<<kowalski.gradeInformatics[3]
		 << "\n5. ocena: "<<kowalski.gradeInformatics[4];*/
		 
	for(int i = 0; i < 5; i++) {
		cout << "\n" << i + 1 << ". ocena: " << kowalski.gradeInformatics[i];
	}
	
	
	return 0;
}
