#include <iostream>
using namespace std;

class Min_heap_implementation
{
    int[] arr;
    int size;
    int capacity;

    // constructor
    Min_heap_implementation(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i)
    {
        return (2 * i) + 1;
    }

    int right(int i)
    {
        return (2 * i) + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
}

int
main()
{
}