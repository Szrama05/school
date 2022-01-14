#include <iostream>

using namespace std;

class Worker {
    private:
        string name {""}, surname {""};
    public:
        void setName(string pName) {
            name = pName;
        };

        void setSurname(string pSurname) {
            surname = pSurname;
        };

        string getName() {
            return name;
        }

        string getSurname() {
            return surname;
        }

        string getData() {
            return name + " " + surname + "\n";
        }


};

class Teacher : public Worker {
    private:
        string schoolSubject {""};
    public:
        void setSchoolSubject(string pSchoolSubject) {
            schoolSubject = pSchoolSubject;
        }

        string getSchoolSubject() {
            return schoolSubject;
        }

        string getData() {
            return getName() + " " + getSurname() + " " + schoolSubject + "\n";
        }
};

class Supervising : public Teacher {
    private:
        string schoolClass{""};
    public:
        void setSchoolClass(string pSchoolClass) {
            schoolClass = pSchoolClass;
        }
        
        string getSchoolClass() {
            return schoolClass;
        }

        string getData() {
            return getName() + " " + getSurname() + " " + getSchoolSubject() + " " + schoolClass + "\n";
        }

};

int main() {

    Worker pracownik;
    pracownik.setName("Janusz");
    pracownik.setSurname("Nowak");
    cout << pracownik.getData();

    Teacher nauczyciel;
    nauczyciel.setName("Tomasz");
    nauczyciel.setSurname("Nowak");
    nauczyciel.setSchoolSubject("Programowanie obiektowe");
    cout << nauczyciel.getData();

    Supervising wychowawca;
    wychowawca.setName("Jerzy");
    wychowawca.setSurname("Sabiniewicz");
    wychowawca.setSchoolSubject("Systemy");
    wychowawca.setSchoolClass("2D");
    cout << wychowawca.getData();

    return 0;
}

