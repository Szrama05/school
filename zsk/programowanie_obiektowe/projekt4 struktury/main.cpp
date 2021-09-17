#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

class Worker {
	public:
		unsigned int id {};
		string name {}, surname {};
		Date dateBirthday {};

		void showAllData();
		//void setData(unsigned int x, string name, string setSurname, unsigned int setDD, unsigned int setMM, unsigned int setYYYY);
		void setData(unsigned int x, string name, string setSurname, Date setDate);
};

void Worker::showAllData() {
	cout << "Dane pracownika:\nIdentyfikator: " << id 
		 << "\nImię i nazwisko: " << name << " " << surname
		 << "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-" << dateBirthday.yyyy;
}

//void Worker::setData(unsigned int x, string name, string setSurname, unsigned int setDD, unsigned int setMM, unsigned int setYYYY)
void Worker::setData(unsigned int x, string name, string setSurname, Date setDate) {
	id = x;
	Worker::name = name;
	surname = setSurname;
	dateBirthday = setDate;
/*
	dateBirthday.dd = setDD;
	dateBirthday.mm = setMM;
	dateBirthday.yyyy = setYYYY;
*/
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");

	Worker kowalski;
	//kowalski.setData(10,"Andrzej", "Nowak", 17, 9, 2021);
	kowalski.setData(10,"Andrzej", "Nowak", {17, 9, 2021});
	kowalski.showAllData();

	return 0;
}
