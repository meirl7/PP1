#include <iostream>

using namespace std;

int n;

int main()
{
    int max;
    cin >> n;
    cin >> max;
    for (int i = 0; i < n - 1; i++)
    {
        int long long a;
        cin >> a;
        if (a > max)
        {
            max = a;
        }
    }
    cout << max;
    return 0;
}