#include <iostream>

using namespace std;

int n;

int main()
{
    int long long sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int long long a;
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}