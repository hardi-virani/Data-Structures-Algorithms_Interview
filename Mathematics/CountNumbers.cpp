// There are multiple methods for this problem.
// Basically this problem is I have to find the total number of the digits
// eg. 12397 -> There are total 5 numbers in this digit.

#include <iostream>
using namespace std;

int iterativemethod(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int recursivemethod(long n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + recursivemethod(n / 10);
}
// Always follow the stacks, otherwise it become so much confusing on paper.

int logarithmicmethod(long n)
{
    return floor(log10(n) + 1);
}

int main()
{
    int n;
    cout << "Enter number: ";

    cin >> n;

    cout << iterativemethod(n) << endl;

    cout << recursivemethod(n) << endl;

    cout << logarithmicmethod(n) << endl;
}