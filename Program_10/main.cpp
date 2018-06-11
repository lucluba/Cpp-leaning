// Arithmetic mean calculation program

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int k;

    cout << "Type your favourite numbers and I will calculate arithmetic mean" << endl;
    cout << "How many number do you want to type? : " << endl;
    cin >> k;

    float numbers[k], sum , mean;

    for (int i = 0; i < k ; i++)
    {
        cout << "Your number: ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    mean = sum / k;

    cout << endl << "Arithmetic mean is: " << mean << endl;

    getchar();
    return 0;
}
