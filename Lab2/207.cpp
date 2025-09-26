#include <iostream>

using namespace std;

int a;

int main()
{
    cin >> a;
    if ((a % 10 == a / 1000) && ((a / 10) % 10) == (((a - (a%100)) / 100) % 10))
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}