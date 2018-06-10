//Login checkbox simulator

#include <iostream>

using namespace std;

string login = "Luc",
        password = "Cplusplus", LOGIN, PASSWORD;

int main ()
{
    cout << "Type your login: ";
    cin >> LOGIN;

    cout << "Type your password: ";
    cin >> PASSWORD;

    if ((LOGIN == login) && (PASSWORD == password)) {
        cout << "Your login and password are correct. Hi, " << login;
    }
    else if (((LOGIN != login)&&(PASSWORD == password)) || ((LOGIN == login) && (PASSWORD != password)))
    {
        cout << "Your login or password are incorrect. Try again";
    }
    else
    {
        cout << "Your login AND password are incorrect.";
    }

    return 0;
}