#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd,mm,yyyy;
};

class Worker {
	public:
		unsigned int id;
		string name, surname;
		Date dateBirthday;

		void getDate();

		Worker(){
			id = 17;
			name = "Janusz";
			surname = "Nowak";
			dateBirthday = {15,10,2021};
		}
		
};

void Worker::getDate() {
	cout << "Id: " << id << "\nImię i nazwisko: " << name << " " << surname 
		 << "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-" << dateBirthday.yyyy << endl;
}

int main() {
	setlocale(LC_CTYPE, "polish");

	Worker nowak;

	//Worker *wsk;
	//wsk = &nowak;
	//cout << wsk->name << endl;

	//wsk->getDate();
	
	nowak.getDate();

	return 0;
}
