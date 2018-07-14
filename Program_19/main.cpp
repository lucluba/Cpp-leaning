// Weighted arithmetic mean program

#include <iostream>
#include <string>

using namespace std;

int choice, number;
float grade, ects;
float sum = 0, denominator = 0, mean;

float grade_list (int &row);

int main()
{
    cout << "What kind of weighted arithmetic mean do you want to calculate?"<<endl;
    cout << endl << " PRESS: " << endl;
    cout << " 1. Semester weighted arithmetic mean (30 ECTS to gain)" << endl;
    cout << " 2. Annual weighted arithmetic mean (60 ECTS to gain)"<< endl << endl;
    choice = getchar();

    cout << "How many subject do you want to type: ";
    cin >> number;
    switch (choice){
        case '1':
        {
            grade_list(number);
            mean = (denominator/30);
            cout << endl << "Semester weighted arithmetic mean " << mean << endl;

            break;
        }
        case '2':
        {
            grade_list(number);
            mean = (denominator/60);
            cout << endl << "Annual weighted arithmetic mean " << mean << endl;

            break;
        }
        default: cout << "Try again. Type >> 1 << or >> 2 <<";
    }
}

float grade_list (int &row) {

    float table[row][2];

    for (int i = 0; i < row; i++) {
        cout << "Type grade #" << i + 1 << " and then ECTS for this subject(use spacebar as a separator)" << endl;
        cin >> grade >> ects;

        int k = 0;
        table[i][k] = grade;
        k++;
        table[i][k] = ects;
    }

    for (int g=0; g<number; g++){
        sum = (table[g][0]) * (table[g][1]);
        denominator = denominator + sum;
    }
    return denominator;
}
