#include <iostream>
#include <unistd.h>  //<windows.h>
#include <cstdlib>

using namespace std;


int main()
{
    for (int i=1; i<=10; i++)
    {
        sleep(1);
        system("clear");    //system('cls');
        cout << i << endl;
    }
    cout << "For loop is over!";

    return 0;
}