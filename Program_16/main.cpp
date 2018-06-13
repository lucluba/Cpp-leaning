// Read data from file and input to arrays - C++ program

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

char answer;
string name_array[20], surname_array[20];
int fav_num_array[20];

int main()
{
    cout << "Do you want to display contact data from file? y/n: ";
    answer=getchar();

    switch(answer)
    {
        case 'y':
        {
            fstream contacts;

            contacts.open("contact_data.txt", ios::in);

            if (contacts.good() == false)
            {
                cout << "File does not exist!";
                exit(0);
            }

            int line_num = 1, h = 0;
            string line;

            while(getline(contacts, line))
            {
                switch(line_num)
                {
                    case 1:
                    {
                        name_array[h] = line;
                    }
                        break;
                    case 2:
                    {
                        surname_array[h] = line;
                    }
                        break;
                    case 3:
                    {
                        fav_num_array[h] = atoi(line.c_str());
                        h++;
                        line_num = 0;
                    }
                        break;
                    default: cout << "Something went wrong!";
                }

                line_num++;
            }

            contacts.close();

            for (int k = 0; k < h; k++)
            {
                cout << "Name: " << name_array[k] << endl;
                cout << "Surname: " << surname_array[k] << endl;
                cout << "Favourite number: " << fav_num_array[k] <<endl << endl;
            }

        }
            break;

        case 'n':
            exit(0);
            break;
        default:
            cout << "Type y or n";
    }

    getchar(); getchar();

    return(0);
}
