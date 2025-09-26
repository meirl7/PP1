#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 9; i++)
    {
        n ^= (1 << i);
    }
    cout << n;
    return 0;
}