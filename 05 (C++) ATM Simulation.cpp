/*
    Project Name: ATM Simulation
    Features:
    - PIN verification
    - Balance check, withdraw, deposit
*/

#include<iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin, balance = 1000, option, amount;
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin) {
        cout << "1. Check Balance\n2. Deposit\n3. Withdraw\nEnter option: ";
        cin >> option;

        switch(option) {
            case 1: cout << "Balance: $" << balance; break;
            case 2: cout << "Enter amount to deposit: "; cin >> amount; balance += amount; cout << "New Balance: $" << balance; break;
            case 3: cout << "Enter amount to withdraw: "; cin >> amount;
                    if (amount <= balance) { balance -= amount; cout << "New Balance: $" << balance; }
                    else { cout << "Insufficient funds."; }
                    break;
            default: cout << "Invalid Option.";
        }
    } else {
        cout << "Wrong PIN!";
    }
    return 0;
}

/*  Output:
    Enter your PIN: 1234
    1. Check Balance
    2. Deposit
    3. Withdraw
    Enter option: 2
    Enter amount to deposit: 500
    New Balance: $1500
*/
