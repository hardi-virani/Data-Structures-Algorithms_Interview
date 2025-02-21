#include <iostream>
#include <cmath>
using namespace std;

// coudn't wrote my own method it was lacking something. (of the given question)
// MISTAKES to LEARN ->  Always think from broader perscecptive of the problems and small from numbers. Like powers, roots in numbers and broader means that how one loop or something like that can solve the whole problems. without including multiple rules at once.

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
// This function is not written by me. (GFG's)
// The TC of this function is O(n*n log n).
void primfactors(int n)
{
    if (isprime(n))
    {
        cout << (n);
    }

    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << (i) << " ";
                x = x * i;
            }
        }
    }
}

// My Optimized solution (Written by me) O(n*n logn)
void primefactors2(int n)
{
    if (n <= 1)
    {
        cout << 0;
    }
    if (isprime(n))
    {
        cout << (n) << endl;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if (isprime(i))
            {
                for (int j = 2; j < n; j++)
                {
                    int powers = pow(i, j);
                    if (n % powers == 0)
                    {
                        cout << i << " ";
                    }
                    else
                    {
                        continue;
                    }
                }
                cout << i << " ";
            }
        }
    }
}

// Optimized method GFG O(√n log n)
void primefactor3(int n)
{
    if (n <= 1)
    {
        cout << 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1)
    {
        cout << n;
    }
}

// Futher(Perfectly) optimized Method to Reduce the itteration
// TC of this function is 𝛳(√n)
void primefactor4(int n)
{
    if (n <= 1)
    {
        return;
    }
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << (i + 2) << " ";
            n = n / (i + 2);
        }
    }
    if (n > 3)
    {
        cout << n << " ";
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    // cout << "Naive method: ";
    primfactors(n);
    cout << endl;

    // cout << "Optimized method: ";
    primefactors2(n);
    cout << endl;

    // cout<<"Optimized GFG method: ";
    primefactor3(n);
    cout << endl;

    // cout<<"Further optimized method: ";
    primefactor4(n);
    cout << endl;
    return 0;
}