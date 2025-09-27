#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int long long n;
    cin >> n;
    int out = 0;

    for (int i = 0; i < 18; i++)
    {
        out += (n % 10) * pow(2, i);

        n /= 10;
    }
    cout << out;
    return 0;
}