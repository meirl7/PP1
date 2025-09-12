#include <iostream>

using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    if (a == b)
    {
        cout << 0;
    }
    else if (a > b)
    {
        cout << 1;
    }
    else{
        cout << 2;
    }
    return 0;
}