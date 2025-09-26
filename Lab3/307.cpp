#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < 18; i++)
    {
        if ((n >> i) & 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}