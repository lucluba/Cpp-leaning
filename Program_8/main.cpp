#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int choice, number;

int main()
{
    int k = 0;
    cout << "I chose one number from 1 to 100" << endl;
    srand(time(NULL));
    number = rand()%100+1;

    while (choice != number )
    {
        k++;
        cout << "Type your number from 1 to 100: " << endl;
        cin >> choice;

        if (choice > number)
        {
            cout << "Secret number is smaller" << endl;
        }
        else if ( choice < number)
        {
            cout << "Secret number is bigger" << endl;
        }
        else
        {
            cout << "You guessed secret number! Well done!" << endl;
        }
    }

    cout << "Exactly correct number was " << choice << " and you guessed in " << k << " try.";

    getchar();
    return 0;
}
