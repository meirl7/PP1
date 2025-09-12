#include <iostream>

using namespace std;

int a;

int main()
{
    int sum;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}