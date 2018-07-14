// Display max and min number program

#include <iostream>

using namespace std;

int number;
float maxim, minim;

int main ()
{
    cout << "How many numbers do you want to type: ";
    cin >> number;

    float* table = new float[number];
    float* pos = table;

    cout << "Type your numbers using enter as separator: " << endl;

    for (int i=0; i < number; i++){
        if (i == number-1)
        {
            cout << "It's your last number: ";
        }
        cin >> *pos;
        pos++;
    }

    pos = table;

    maxim = *pos;
    minim = *pos;

    for (int k=1; k < number; k++)
    {
        pos++;
        if (maxim < *pos) { maxim = *pos; }
        if (minim > *pos) { minim = *pos; }
    }

    cout << "Maximum number is: " << maxim << "." << endl;
    cout << "Minimum number is: " << minim << ".";

    delete [] table;

    return 0;
}