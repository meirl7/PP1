#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n == (~(n - 1) & n) ? cout << "YES" : cout << "NO";
    return 0;
}