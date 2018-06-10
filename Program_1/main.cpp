#include <iostream>

using namespace std;

int pupils, sweets, x, y;

int main ()
{
    // Mark has to distribute his sweets for all pupils except himself

    cout << "How many pupils is in Mark's class:";
    cin >> pupils;

    cout << "How many sweets Mark's mum gave him:";
    cin >> sweets;

    x = sweets / (pupils - 1);
    y = sweets - x * (pupils - 1) ;

    cout << "Every child will get " << x << " sweets";
    cout << endl << y << " sweets will remain for Mark";

}

