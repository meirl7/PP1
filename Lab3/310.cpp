#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        while (a != 0)
        {
            if (a % 10 == 0)
            {
                cnt++;
            }
            a /= 10;
        }
    }
    cout << cnt;
    return 0;
}