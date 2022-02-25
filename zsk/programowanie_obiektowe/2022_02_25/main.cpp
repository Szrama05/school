#include <iostream>

using namespace std;

class Character {
	public:
		string name;
		virtual void go() = 0;
		virtual void stop() = 0;
		virtual string showName() = 0;
};


class Human : public Character {
	public:
		void go() {
			cout << "Cz³owiek idzie\n";
		}
		void stop() {
			cout << "Czlowiek zatrzymuje sie\n";
		}
		
		string showName() {
			return name;
		}
		
};

class Bear : public Character  {
	public:
		void go() {
			cout << "NiedŸwiedŸ idzie\n";
		}
		void stop() {
			cout << "NiedŸwiedŸ zatrzymuje siê\n";
		}
		
		string showName() {
			return name;
		}
};

class SuperHero : public Character  {
	
};

int main() {
	
	setlocale(LC_ALL, "polish");
	
	Human czlowiek;
	czlowiek.go();
	
	Character *wsk = &czlowiek;
	wsk->go();
	
	Bear niedzwiedz;
	wsk = &niedzwiedz;
	wsk->go();
	
	wsk = &czlowiek;
	wsk->name = "Janusz";
	cout << wsk->showName();
	
	return 0;
}

