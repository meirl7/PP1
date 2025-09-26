#include <iostream>
#include <cmath>

using namespace std;

int n;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (pow(2, i) == n)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}