// do while loop with linear search algorithm

#include <iostream>

using namespace std;

int number;

int main()
{
    int linearSearch = 0, k = 0;

    cout << "Type your number: ";
    cin >> number;

    do {
        k++;
        linearSearch++;
    } while (linearSearch < number);

    cout << "Your number is: " << linearSearch << ", we guessed " << k << " times, but we did it!";

    return 0;
}
