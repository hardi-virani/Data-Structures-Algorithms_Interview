// This problem means counting the number of 0s after getting the factorial of the number.
#include <iostream>
using namespace std;

// This method has O(n) time limit as well as if we use n=20 then is gives -ve value due to long numbers(Overflow issues) even if we use long long data type.
// There is more efficient method below.
int trailing_zeros(int n)
{
    int fact = n;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial:" << fact << endl;

    int count = 0;

    while (fact != 0)
    {
        int ld = fact % 10;
        fact = fact / 10;
        if (ld == 0)
        {
            count++;
        }
    }
    cout << "Counted 0s: ";
    return count;
}

// Efficient method with less time and appropriate for all numbers. (Doesnt overflow and yet still gives answers)
// Should understand the method of this because it might help in future thinking.
int countZreos(int n)
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
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    cout << "Limited method:" << endl;
    cout << trailing_zeros(n) << endl;
    cout << endl;

    cout << "Efficient method(Counted 0s): " << countZreos(n) << endl;
    cout << endl;
    return 0;
}