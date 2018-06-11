// Lotto lottery simulator - no array

#include <iostream>
#include <stdio.h>
#include <unistd.h> // <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int x1, x2, x3, x4, x5, x6, ball1, ball2, ball3, ball4, ball5, ball6, k = 0;

int main()
{
    srand(time(NULL));
    x1 = rand()%49+1;

    x2 = rand()%49+1;
    if (x2 == x1)
    {
        x2 = rand()%49+1;
    }

    x3 = rand()%49+1;
    if ((x3 == x2) || (x3 == x1))
    {
        x3 = rand()%49+1;
    }

    x4 = rand()%49+1;
    if ((x4 == x3) || (x4 == x2) || (x4 == x1))
    {
        x4 = rand()%49+1;
    }

    x5 = rand()%49+1;
    if ((x5 == x4) || (x5 == x3) || (x5 == x2) || (x5 == x1))
    {
        x5 = rand()%49+1;
    }

    x6 = rand()%49+1;
    if ((x6 == x5) || (x6 == x4) || (x6 == x3) || (x6 == x2) || (x6 == x1))
    {
        x6 = rand()%49+1;
    }

    cout << "Type your six lucky numbers from 1 to 49 (no repeat): " << endl;
    cin >> ball1;
    cin >> ball2;
    cin >> ball3;
    cin >> ball4;
    cin >> ball5;
    cin >> ball6;

    cout << "The lucky numbers are: " << endl;
    cout << x1 << " , ";
//    sleep(1);
    cout << x2 << " , ";
//    sleep(1);
    cout << x3 << " , ";
//    sleep(1);
    cout << x4 << " , ";
//    sleep(1);
    cout << x5 << " , ";
//    sleep(1);
    cout << x6;

    if ((x1 == ball1) || (x1 == ball2) || (x1 == ball3) || (x1 == ball4) || (x1 == ball5) || (x1 == ball6))
    {
        k++;
    }
    if ((x2 == ball1) || (x2 == ball2) || (x2 == ball3) || (x2 == ball4) || (x2 == ball5) || (x2 == ball6))
    {
        k++;
    }
    if ((x3 == ball1) || (x3 == ball2) || (x3 == ball3) || (x3 == ball4) || (x3 == ball5) || (x3 == ball6))
    {
        k++;
    }
    if ((x4 == ball1) || (x4 == ball2) || (x4 == ball3) || (x4 == ball4) || (x4 == ball5) || (x4 == ball6))
    {
        k++;
    }
    if ((x5 == ball1) || (x5 == ball2) || (x5 == ball3) || (x5 == ball4) || (x5 == ball5) || (x5 == ball6))
    {
        k++;
    }
    if ((x6 == ball1) || (x6 == ball2) || (x6 == ball3) || (x6 == ball4) || (x6 == ball5) || (x6 == ball6))
    {
        k++;
    }

    cout << endl << "You chose " << k << " of lucky numbers" << endl;

    if ( k == 6)
    {
        cout << "You won main prize!!!!!!!!!!!!!";
    }
    else if (k == 5)
    {
        cout << "You won second prize!!!!!!!!!!!!!";
    }
    else if (k == 4)
    {
        cout << "You won third prize!!!!!!!!!!!!!";
    }
    else if (k == 3)
    {
        cout << "You won smallest prize!!!!!!!!!!!!!";
    }
    else
    {
        cout << "To win you should have at least 3 guessed numbers. Try again later.";
    }

    getchar();
    return 0;
}
