#include <iostream>
using namespace std;

// Niave Method
int trailingZero(int n)
{
    int fact = 1;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
    while (fact != 0)
    {
        int temp = fact % 10;
        if (temp == 0)
        {
            count++;
        }
        fact = fact / 10;
    }
    return count;
}

// Efficient method
int countZeros(int n)
{
    int count = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        count = count + n / i;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << trailingZero(n) << endl;
    cout << countZeros(n) << endl;
    return 0;
}