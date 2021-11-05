#include <iostream>

using namespace std;

class Worker {
	public:
		string name, surname;

		Worker();
		Worker(string pName, string pSurname);

		~Worker() {
			cout << "Wywołanie destruktora" << endl;
		}

		void getData();
};

Worker::Worker() {
	cout << "Kontruktor domyślny" << endl;
}

Worker::Worker(string pName, string pSurname): 
	name {pName},
	surname {pSurname}
{
	cout << "Kontruktor parametryczny" << endl;
}

void Worker::getData() {
	cout << "Imię i nazwisko: " << name << " " << "surname";
}

int main() {

	setlocale(LC_CTYPE, "polish");

	Worker kowalski;
	Worker nowak;

	return 0;
}
