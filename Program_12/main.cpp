// Lotto lottery simulation program - on arrays

#include <iostream>
#include <stdio.h>
#include <unistd.h> // <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int x[6], balls[6], num = 0;

    srand(time(NULL));

    cout << "Type your six lucky numbers from 1 to 49 (no repeat): " << endl;
    for (int j = 0; j < 6; j++) {
        cin >> balls[j];
    }

    cout << "The lucky numbers are: " << endl;

    for (int i = 0; i < 6; i++)
    {
        x[i] = rand()%49+1;

        for (int k = i; k >= 1; k--){
            if (x[i] == x[k-1])
            {
                x[i] = rand()%49+1;
                k = i;
            }
        }

        cout << x[i] << endl;
        sleep(1);
    }

    for (int g = 0; g < 6; g++)
    {
        for (int h = 0; h < 6; h++)
        {
            if(x[g] == balls[h])
            {
                num++;
            }
        }
    }

    cout << endl << "You chose " << num << " of lucky numbers" << endl;

    if ( num == 6)
    {
        cout << endl << "You won main prize!!!!!!!!!!!!!";
    }
    else if (num == 5)
    {
        cout << endl << "You won second prize!!!!!!!!!!!!!";
    }
    else if (num == 4)
    {
        cout << endl << "You won third prize!!!!!!!!!!!!!";
    }
    else if (num == 3)
    {
        cout << endl << "You won smallest prize!!!!!!!!!!!!!";
    }
    else
    {
        cout << endl << "To win you should have at least 3 guessed numbers. Try again later.";
    }

    getchar();
    return 0;
}
