// Strings function training 

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string text_long1, text_long2, text_long3, text_long4;
string text_short;
string part_text, combine_text;


int main ()
{
    cout << "Enter your name: ";
    cin >> text_short;

    cin.ignore();
    cout << "Enter first long text about something: ";
    getline(cin, text_long1);

    cout << "Enter second long text about something: ";
    getline(cin, text_long2);

    // Transformation to lower and to upper

    if (text_long1.length() > text_long2.length())
    {
        transform(text_long1.begin(), text_long1.end(), text_long1.begin(), ::toupper);
        cout << "To upper: " << text_long1 << endl;
        transform(text_long2.begin(), text_long2.end(), text_long2.begin(), ::tolower);
        cout << "To lower: " << text_long2 << endl;
    }
    else if (text_long1.length() < text_long2.length())
    {
        transform(text_long1.begin(), text_long1.end(), text_long1.begin(), ::tolower);
        cout << "To lower: " << text_long1 << endl;
        transform(text_long2.begin(), text_long2.end(), text_long2.begin(), ::toupper);
        cout << "To upper: " << text_long2 << endl;
    }
    else
    {
        cout << "Your sentences seem to be equal length - so I don't want transform it.";
    }

    // Combining text

    combine_text = text_short + " said: " + text_long1;

    cout << "Combine text: " << combine_text << endl;

    // Inserting new part into existing text

    combine_text.insert(10, " (Lorem ipsum) ");

    cout << "After inserting new text:  "<< combine_text << endl;

    // Searching phrase into existing text

    string search = "em ip";

    size_t position = combine_text.find(search);

    cout << "Searching: ";

    if (position != string::npos)
    {
        cout << "The phrase you are looking for starts from position: " << position << endl;
    }
    else
    {
        cout << "I couldn't find what you were looking for." << endl;
    }

    // Deleting part of text

    combine_text.erase(10, 15);

    cout << "Erasing: " << combine_text << endl;

    // Copy part of a text into new variable

    part_text = combine_text.substr(10, 7);

    cout << "Save part into new variable: " << part_text << endl;

    return(0);
}
