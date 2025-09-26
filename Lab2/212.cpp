#include <iostream>

using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    if (b > 0.8 * a)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}