#include <iostream>

using namespace std;

int n;

int main()
{
    cin >> n;

    int long long max, pos = 1;

    cin >> max;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        int long long a;
        cin >> a;
        if (a > max)
        {
            max = a;
            pos = i + 2;
        }
    }
    cout << pos;
    return 0;
}