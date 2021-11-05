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
	cout << "Imię i nazwisko: " << name << " " << surname << endl;
}

void createObjectWorker() {
	Worker worker;
	worker.getData();
	cout << "Wywołanie funkcji createObjectWorker" << endl;
}

void createObjectWorker1(string pName, string pSurname) {
	Worker worker = Worker(pName, pSurname);
	worker.getData();
	cout << "Wywołanie funkcji createObjectWorker1" << endl;
}

int main() {

	setlocale(LC_CTYPE, "polish");

	Worker kowalski = Worker("Janusz", "Kowalski");
	kowalski.getData();

	cout << "\nWskaźnik\n";

	Worker *p_kowalski = new Worker("Jan", "Kowalski");
	delete p_kowalski;

	cout << endl << endl;

	createObjectWorker();

	cout << endl << endl;

	createObjectWorker1("Adam", "Nowak");

	cout << endl << endl;

	return 0;
}
