#include <iostream>
using namespace std;

bool plaindrom(int n)
{
    int temp = n;
    int reverse = 0;
    while (temp != 0)
    {
        int ld = temp % 10;
        reverse = reverse * 10 + ld;
        temp = temp / 10;
    }

    if (reverse == n)
    {
        return true; // true = 1;
    }
    else
    {
        return false; // false = 0;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << plaindrom(n) << endl;
    return 0;
}