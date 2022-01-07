#include <iostream>

using namespace std;

class Account {
    private:
        int balance = 1000;
        int debit = 500;
        int credit = 2000;
    public:
        int getBalance();
        int withdraw(int money);
        int withdraw1(int money);
        int deposite(int money);

};

int Account::getBalance() {
    return balance;
}

int Account::withdraw1(int money) {
    if (money > 0) {
        if(money <= (balance + debit)) {
            balance -= money;
            return money;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
    
}

int Account::withdraw(int money) {
    if (money > 0) {
        if(money <= balance) {
            balance -= money;
            return money;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
    
}

int Account::deposite(int money) {
    if(money > 0) {
        balance += money;
        return money;
    }
    else {
        return 0;
    }
}


int main() {

    setlocale(LC_CTYPE,"polish");

    Account k1;
    // cout << "Stan konta: " << k1.balance << endl;
    // k1.balance = +2000;
    // cout << "Stan konta: " << k1.balance << endl;

    cout << "Stan konta: " << k1.getBalance() << "zł" << endl;

    cout << "Wypłacono z konta: " << k1.withdraw(-5) << endl;
    cout << "Wypłacono z konta: " << k1.withdraw(5) << endl;
    cout << "Stan konta: " << k1.getBalance() << "zł" << endl;

    cout << "Wpłacono na konto: " << k1.deposite(700) << endl;
    cout << "Stan konta: " << k1.getBalance() << "zł" << endl;

    cout << "Wypłacono z konta: " << k1.withdraw1(1900) << endl;
    cout << "Stan konta: " << k1.getBalance() << "zł" << endl;

    return 0;
}

