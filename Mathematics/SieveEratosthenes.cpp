#include <iostream>
using namespace std;

int isprime(int N)
{
    if (N < 2 || (!(N & 1) && N != 2))
        return 0;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!(N % i))
            return 0;
    }
    return 1;
}

// Naive Method TC: O(n*√n)
void Eratos(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
            cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    Eratos(n);
    cout << endl;
}