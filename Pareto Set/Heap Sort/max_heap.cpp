#include <iostream>
using namespace std;

// Build heap -> TC O(n)
// Heapify -> TC O(logn)

void maxheapify(int arr[], int n)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        maxheapify(arr, n, largest);
    }
}

void build_heap(int arr[], int n)
{
    for (int i = n / 2; i >= 0i --)
    {
        maxheapify(arr, n, i);
    }
}

int main()
{
}