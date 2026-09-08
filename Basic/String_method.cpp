#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    name.length();
    if (name.length() > 12)
    {
        cout << "Your name can't be over 12 characters long." << endl;
    }
    else if (name.empty())
    {
        cout << "You didn't enter a name." << endl;
    }
    else
    {
        cout << "Hello, " << name << "!" << endl;
    }
    cout << name.find(" ") << endl;

    return 0;
}