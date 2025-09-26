#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        if ((n >> i) & 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}