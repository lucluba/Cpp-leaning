// How many days is in the chosen month?

#include <iostream>
#include <cstdlib>

using namespace std;

int month, year;

int main()
{
    cout << "Choose the number of the month: ";

    if (!(cin >> month))
    {
        cout << "Incorrect month number data - choose number not char!";
        exit(0);
    }

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            cout << "This month has 31 days.";
        break;

        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            cout << "This month has 30 days.";
        break;

        case 2: {
            cout << "What year are you thinking about: ";
            cin >> year;
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
                cout << "This month has 29 days.";
            } else cout << "This month has 28 days";
        }
    }

    return(0);
}