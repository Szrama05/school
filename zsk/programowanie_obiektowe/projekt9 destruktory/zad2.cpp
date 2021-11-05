#include <iostream>

using namespace std;


class Worker {
    public:
        string name, surname;

        static int s_counter;
        
        Worker();
        Worker(string pName, string pSurname);

        ~Worker() {
            cout << "Wywołanie destruktora" << endl;
            s_counter--;
            cout << "Obecnie obiektów jest: " << s_counter << endl;
        }
};

int Worker::s_counter = 0;

Worker::Worker() {
    cout << "Konstruktor doymślny" << endl;
    s_counter++;
    cout << "Obecnie obiektów jest: " << s_counter << endl;
}

Worker::Worker(string pName, string pSurname): 
    name {pName},
    surname {pSurname}
{
    cout << "Konstruktor parametryczny" << endl;
    s_counter++;
    cout << "Obecnie obiektów jest: " << s_counter << endl;
}

int main() {

	setlocale(LC_CTYPE, "polish");

	Worker kowalski;

    Worker kowalski1 = Worker("Jan", "Kowalski");

    Worker *p_kowalski = new Worker("Marek", "Kowalski");
    //delete p_kowalski;

	return 0;
}
