// Display number closest to average program

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int number;
float sum, average, diff, dif_1, nearest;

int main ()
{
    cout << "How many numbers do you want to type: ";
    cin >> number;

    // Reserve memory for particular amount of cells and set pointer 'pos' to table[0]
    float* table = new float[number];
    float* pos = table;

    cout << "Type your numbers using enter as separator: " << endl;

    // Input numbers using pointer with mark on last number
    for (int i=0; i < number; i++){

        if (i == number-1)
        {
            cout << "It's your last number: ";
        }

        cin >> *pos;
        sum += *pos;
        pos++;
    }

	  average = sum/number;
    cout << "Average of all numbers is: " << average <<endl;

		// Reserve memory for second table with diffierence between average and input number
    
    float* table2 = new float[number];
    float* pos2 = table2;

    pos = table;

    for (int k=0; k < number; k++){
    		*pos2 = abs(*pos - average); // Absolute value of difference between average and input number
        pos++;
        pos2++;
    }

    pos = table;
    pos2 = table2;
    nearest = *pos;	// First input number is set as nearest to average
    dif_1 = *pos2;  // First difference set as the lowest

    // Loop for checking the lowest difference, start from second number

    for (int j=1; j < number; j++)
    {
        pos2=table2;
        pos2+=j;
        diff = *pos2;

        if (diff < dif_1)
        {
            pos = table;
            pos+=j;
            nearest = *pos;
            dif_1 = diff;
        }
    }

    cout << "Nearest numbers to average are: " << nearest; 

    // Loop to check repeats and the same differences

    for (int k=0; k < number; k++)
    {
        pos = table;
        pos2 = table2;
        pos+=k;
        pos2+=k;

        if ((dif_1 == *pos2) && (*pos != nearest))
        {
            nearest = *pos;
            cout << " , " << nearest;
        }
    }

    delete [] table;
    delete [] table2;

    return 0;
}
