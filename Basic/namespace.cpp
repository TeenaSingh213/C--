#include <iostream>
using namespace std;
namespace first
{
    int x = 1;

}
namespace second
{
    int x = 2;
}
int main()
{
    int x = 10;
    cout << x << endl;
    cout << first::x << endl; // :: is called scope resolution operator
    cout << second::x << endl;
    return 0;
}