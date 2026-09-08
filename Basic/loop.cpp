#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        i++;
    }
    string name;

    while (name.empty())
    {
        cout << "Please enter your name: ";
        getline(cin, name);
        cout << "Hello, " << name << "!" << endl;
    }

    // Do while
    int number;
    cout << "Enter a number between 1 and 10: ";
    do
    {
        cout << "Enter a positive number";
        cin >> number;
    } while (number < 1 || number > 10);
    // For loop
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}