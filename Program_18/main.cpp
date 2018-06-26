// Fibonacci numbers program - arrays vs pointers

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int num;
clock_t start, stop;
double speed;

int main ()
{
    cout << "Type how many Fibonacci numbers you want to display: ";
    cin >> num;

    long double table[num];

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

//    delete [] table;

    cout << endl << "_______________________________" << endl << endl;

    long double *pointer = table;
    pointer = new long double [num];

    start = clock();

    for (int k=0; k<2; k++)
    {
        *pointer = 1;
        cout << *pointer << " , ";
        pointer++;
    }

    for (int k=2; k<num; k++)
    {
        *pointer = *(pointer-2) + *(pointer-1);
        cout << *pointer << " , ";
        pointer++;
    }
    stop = clock();
    speed = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << endl << "Time with pointer: " << speed << endl;

//    delete [] table;

    getchar(); getchar();
    return 0;
}
