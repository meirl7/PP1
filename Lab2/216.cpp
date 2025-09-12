#include <iostream>

using namespace std;

int n;

int main()
{
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int long long a;
        cin >> a;
        if (a > 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}