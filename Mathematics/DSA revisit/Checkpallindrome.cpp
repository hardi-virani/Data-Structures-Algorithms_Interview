#include <iostream>
using namespace std;

// Had to see.
// Learnings after thinking about this for almost half hr:
// 1. If division is not possible then you can check modulo too. Think both the ways.
// 2. If you have any idea that it could be solved like this then check it. DO NOT EVER JUMP INTO SOLUTION DIRECTLY.

bool pallindrom(int n)
{
    int temp = n;
    int reverse = 0;
    int ld = 0;
    for (int i = 1; i <= n; i++)
    {
        ld = temp % 10;
        reverse = reverse * 10 + ld;
        temp = temp / 10;

        if (temp == 0)
        {
            break;
        }
    }
    if (reverse == n)
    {
        return true;
    }
    return false;
}

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << pallindrom(n) << endl;
    return 0;
}