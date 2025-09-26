#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << n;
    }
    else
    {
        char a = n + 55;
        cout << a;
    }
    return 0;
}