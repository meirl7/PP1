#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;
    if (((a == b) || (b == c) || (a == c)) && (a >= 1) && (b >= 1) && (c >= 1) && (a <= 10) && (b <= 10) && (c <= 10) && (a + b > c) && (a + c > b) && (b + c > a)) 
    {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}