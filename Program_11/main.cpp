// Fibonacci numbers program

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(10);

    int i, k;

    cout << "Type how many Fibonacci numbers you want to display: ";
    cin >> k;

    long double numbers[k], fi;

    numbers[0] = numbers[1] = 1;

    if (k == 1)
    {
        cout << numbers[0];
    }
    else if (k == 2)
    {
        cout << numbers[0] << " , " << numbers[1];
    }
    else{
        cout << numbers[0] << " , " << numbers[1] << " , ";
        for (i=2; i < k; i++)
        {
            numbers[i] = numbers[i-1] + numbers[i-2];
            cout << numbers[i] << " , ";
        }
    }

    fi = numbers[k-1] / numbers[k-2];

    cout << endl << "Golden ratio: (more numbers better precision) " << fi << endl;

    return 0;
}
