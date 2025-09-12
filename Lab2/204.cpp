#include <iostream>

using namespace std;

int num;

int main()
{
    cin >> num;
    if (num == 0)
    {
        cout << "None";
    }
    else if (num % 2 == 1)
    {
        cout << "Odd";
    }
    else if (num % 2 == 0)
    {
        cout << "Even";
    }
    return 0;
}