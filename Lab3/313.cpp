#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int odd_sum = 0, even_sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';

        (i + 1) % 2 == 1 ? odd_sum += digit : even_sum += digit;
    }
    odd_sum == even_sum ? cout << "YES" : cout << "NO";

    return 0;
}