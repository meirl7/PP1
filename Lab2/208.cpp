#include <iostream>

using namespace std;

int a;

int main()
{
    cin >> a;
    if (a % 2 == 1)
    {
        cout << "Super";
    }
    else
    {
        if (a >= 2 && a <= 5)
        {
            cout << "Not Super";
        }
        else if (a >= 6 && a <= 20)
        {
            cout << "Super";
        }
        else
        {
            cout << "Not Super";
        }
    }
    

    return 0;
}