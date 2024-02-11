#include <iostream>
#include <string>

using namespace std;

class akunbank {
private:
    string pemilik;
    double balance;

public:
    akunbank(string accountOwner, double initialBalance)
        : pemilik(accountOwner), balance(initialBalance) {}

    void Deposit(double amount) {
        balance += amount;
    }

    void Withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Saldo tidak mencukupi" << endl;
        }
    }

    void DisplayBalance() {
        cout << "Saldo terkini: " << balance << endl;
    }
};

int main() {
    akunbank account("John Doe", 1000.0);
    account.DisplayBalance();

    account.Deposit(500.0);
    account.DisplayBalance();

    account.Withdraw(200.0);
    account.DisplayBalance();

    account.Withdraw(2000.0);
    account.DisplayBalance();

    return 0;
}