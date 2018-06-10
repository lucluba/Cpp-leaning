#include <iostream>

using namespace std;

string name;
int number;

int main()
{
    cout << "Type your name: ";
    cin >> name;

    cout << "Type your favourite integer: ";
    cin >> number;

    if (number > 0)
    {
        for (int i = 1; i <= number; i++) {
            cout << i << ". " << name << endl;
        }
    }
    else {
        cout << "Type ingeter greater than 0";
    }

    return 0;
}
