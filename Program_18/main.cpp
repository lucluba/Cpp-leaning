// Fibonacci numbers program - on pointers

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int num;
clock_t start, stop;
double speed;

int main ()
{
    cout << "Type how many Fibonacci numbers you want to display: ";
    cin >> num;

    double table[num];

    cout<<"Table without pointer: "<<endl;

    start = clock();
    table[0] = table[1] = 1;

    cout<< table[0]<< " , " << table[1] << " , ";

    for (int i=2; i < num; i++)
    {
        table[i] = table[i-1] + table[i-2];
        cout << table[i] << " , ";
    }
    stop = clock();
    speed = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << endl << "Time without pointer: " << speed << endl;

    cout << endl << "_______________________________" << endl << endl;

    double *fibonacci;
    fibonacci = new double [num];

    start = clock();
    *fibonacci = 1;
    cout << *fibonacci <<" , ";
    fibonacci++;
    *fibonacci = 1;
    cout << *fibonacci << " , ";
    fibonacci++;

    for (int k=2; k<num; k++)
    {
        *fibonacci = *(fibonacci-1) + *(fibonacci-2);
        cout<< *fibonacci << " , ";
        fibonacci++;
    }
    stop = clock();
    speed = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << endl << "Time with pointer: " << speed << endl;

    delete [] fibonacci;

    getchar(); getchar();
    return 0;
}
