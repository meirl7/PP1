#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int n1 = 0, n2 = 0;
    int i = 0;
    while (n != 0)
    {
        if (i % 2 == 0)
        {
            n1 += n % 10;
        }
        else
        {
            n2 += n % 10;
            
        }
        n /= 10;
        
        i++;
    }

    cout << n1 - n2;
    return 0;
}