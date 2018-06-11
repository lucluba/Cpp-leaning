// SIMPLE CALCULATOR on switch function

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int choice;
float number1, number2;

int main() {

    for (;;) {
        cout << setprecision(6);

        cout << endl;
        cout << "SIMPLE CALCULATOR" << endl;
        cout << "-----------------" << endl;
        cout << "[1] Addition" << endl;
        cout << "[2] Subtraction" << endl;
        cout << "[3] Multiplication" << endl;
        cout << "[4] Division" << endl;
        cout << "[5] Exit program" << endl << endl;

        cout << "Type first number: ";
        cin >> number1;
        cout << "Type second number: ";
        cin >> number2;
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Result: " << number1 + number2;
                break;
            case 2:
                cout << "Result: " << number1 - number2;
                break;
            case 3:
                cout << "Result: " << number1 * number2;
                break;
            case 4: {
                if (number2 == 0) {
                    cout << "You can't divide by 0";
                } else {
                    cout << "Result: " << number1 / number2;
                }
            }
                break;
            case 5:
                exit(0);
                break;
            default:
                cout << "Choose only valid operation number";

        }

        getchar();
        getchar();
        system("clear");
    }

    return 0;
}