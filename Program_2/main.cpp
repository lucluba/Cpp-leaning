//Cash machine simulator

#include <iostream>

using namespace std;

string PIN;

string pin = "0111";

int main() {
    cout << "Insert your card" << endl;
    cout << "Type your PIN: ";

    cin >> PIN;

    if (PIN == pin)
    {
        cout << " PIN is correct";
    }
    else
    {
        cout << " PIN is incorrect";
    }
}