#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;
    if ((a + b + c >= 70) && (a + b >= 30) && c>=20)
    {
        cout << "YES!";
    }
    else
    {
        cout << "NO.";
    }
    return 0;
}