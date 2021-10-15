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

		Worker();

		Worker(int id);

		Worker(int id, string name, string surname);

		Worker(int, string, string surname, Date dateBirthday);

};

void Worker::getDate() {
	cout << "Id: " << id << "\nImię i nazwisko: " << name << " " << surname 
		 << "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-" << dateBirthday.yyyy << endl;
}

Worker::Worker(int pId, string pName, string pSurname,  Date pDateBirthday) {
	id = pId;
	name = pName;
	surname = pSurname;
	dateBirthday = pDateBirthday;

}

Worker::Worker(int pId) {
	id = pId;
};

Worker::Worker(int pId, string pName, string pSurname) {
	id = pId;
	name = pName;
	surname = pSurname;
}

int main() {
	setlocale(LC_CTYPE, "polish");

	Worker nowak(8, "Janusz", "Nowak", {15,10,2021});
	Worker kowal(18);

	//Worker *wsk;
	//wsk = &nowak;
	//cout << wsk->name << endl;

	//wsk->getDate();
	
	nowak.getDate();
	cout << "---------------------------" << endl;
	kowal.getDate();

	return 0;
}
