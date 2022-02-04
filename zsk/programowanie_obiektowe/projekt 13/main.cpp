#include <iostream>

using namespace std;

class Worker{
    public:
        string name, surname;
        
        Worker() {
            cout << "Konstruktor domyslny klasy Worker";
        }

        Worker(string pName, string pSurname) {
            name = pName;
            surname = pSurname;
        }

        string getData() {
            return "Imię i nazwisko: " + name + " " + surname + "\n\n";
        }
};

class Teacher: public Worker{
    public:
        string subjectInSchool;
        Teacher() {
            cout << "Konstruktor domyślny klasy Teacher\n\n";
        }

        Teacher(string pName, string pSurname, string pSubjectInSchool) {
            cout << "Parametryczny\n\n";
            name = pName;
            surname = pSurname;
            subjectInSchool = pSubjectInSchool;
        }

};

int main() {

    Teacher pracownik2;

    return 0;
}
