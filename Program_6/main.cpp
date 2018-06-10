#include <iostream>

using namespace std;

int number;

int main()
{
    cout << "Type any number and you will see all even number from choosen one: ";
    cin >> number;

    while (int i = number)
    {
        int div = number % 2;

        if ( div == 0) {
            cout << number << ", ";
        }

        number--;

    }

    return 0;
}