//Simple output to external file program

#include <iostream>
#include <fstream>

using namespace std;

int persons;
float fav_num;
string name, surname;

int main()
{
    cout << "How many person's - name, surname and their favourite number do you want to type?: ";
    cin >> persons;

    for (int i = 0; i < persons; i++) {
        cout << "Type name: ";
        cin >> name;
        cout << "Type surname: ";
        cin >> surname;
        cout << "Type his/her favourite number: ";
        cin >> fav_num;

        fstream personData;

        personData.open("personal_data.txt", ios::out | ios::app);
        personData << name << "\t" << surname << "\t" << fav_num << endl;
        personData.close();
    }

    return(0);
}