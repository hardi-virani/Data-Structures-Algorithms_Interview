#include <iostream>
#include <cmath>
using namespace std;

// initial code by myself
bool isPrime(int n)
{
    int count = 0;
    if (n > 1 && n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return true; // 1
        }
    }
    else if (n == 2)
    {
        return true;
    }
    return false; // 0
}

// naive method //modified version of the previous function.
bool primechecking(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Efficient method. With less TC
// This function is written by myself with my logic. I tested out this function in chaptGpt it works perfectly including all Test Cases but still it says that it is incomplete.
bool checkingPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else if (n > 2 && n % 2 == 0)
    {
        return false;
    }
    if (n % 3 == 0 && n != 3 || n % 5 == 0 && n != 5 || n % 7 == 0 && n != 7)
    {
        return false;
    }
    double root = sqrt(n);
    if (root != floor(root))
    {
        return true;
    }
    return false;
}

// This is the efficient code from GFG which has O(root(n)) Time complexicity.
bool primecheck_GFG(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// or the better option is this. from GFG .
bool primechecking_GFG(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    for (int i = 5; i * i <= n; i++)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int value = isPrime(n);

    if (value == 1)
    {
        cout << "Prime Number: 1" << endl;
    }
    else if (value == 0)
    {
        cout << "Not Prime Number: 0" << endl;
    }

    cout << primechecking(n) << endl;
    cout << checkingPrime(n) << endl;
    cout << primecheck_GFG(n) << endl;

    return 0;
}