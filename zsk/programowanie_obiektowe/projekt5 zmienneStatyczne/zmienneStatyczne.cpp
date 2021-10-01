#include <iostream>

using namespace std;

class School{
	public:
		static string s_school;
		static string s_jobPosition;

		string name;
		string surname;

		void getData();
		void setNameSurname(string name, string surname, string s_school);

		static string s_getSchool();
		static void s_setSchool(string pSchool) {
			s_school = pSchool;
		}

};

string School::s_school = "ZSK";
string School::s_jobPosition = "student";

void School::getData() {
	cout << "Imię i nazwisko: " << name << " " << surname << endl
		 << "Szkoła: " << s_school << endl;
}

void School::setNameSurname(string pName, string pSurname, string s_school) {
	name = pName;
	surname = pSurname;
	School::s_school = s_school;
}

string School::s_getSchool() {
	return s_school;
}

class Time {
	public:
		static string s_date;
		static string s_time;

		static void s_showTime() {
			cout << "Dzisiejsza data: " << s_date << "\nGodzina: " << s_time;		
		}

		static void getDate(string pDate) {
			s_date = pDate;
		}
		static void getTime(string pTime) {
			s_time = pTime;
		}
		static void getDateTime(string pDate, string pTime);

};

void Time::getDateTime(string pDate, string pTime) {
	getDate(pDate);
	getTime(pTime);
}

string Time::s_date = "01.10.2021";
string Time::s_time = "11:00";

int main() {
	setlocale(LC_CTYPE,"polish");

	cout << School::s_school << endl;
	cout << School::s_jobPosition << endl;

	School kowalski;
	kowalski.setNameSurname("Jan", "Kowalski", "CDV");
	kowalski.School::getData();

	School::s_school = "ZSŁ";

	kowalski.getData();
	kowalski.s_school = "ZSK";
	kowalski.getData();

	cout << School::s_school << endl;

	School::s_setSchool("CDV");
	kowalski.getData();

	Time::s_showTime();
	Time::getDateTime("02.10.2021", "12:00");
	Time::s_showTime();


	return 0;
}