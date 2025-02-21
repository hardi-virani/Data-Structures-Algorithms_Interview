#include <iostream>
using namespace std;

int sumOfN(int n)
{

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = i + sum;
        // sum += i;
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << sumOfN(n) << endl;
    return 0;
}