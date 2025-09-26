#include <iostream>

using namespace std;

int n;

int main()
{
    cin >> n;
    int a = 1;
    while (a <= n)
    {
        cout << a << " ";
        a *= 2;
    }
    return 0;
}