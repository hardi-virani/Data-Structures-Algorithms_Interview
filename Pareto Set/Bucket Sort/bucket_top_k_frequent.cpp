#include <bits/stdc++.h>
using namespace std;

void bucketsort(int n, vector<int> &nums)
{
    vector<vector<int>> bucket(n);
    for (int i = 0; i < n; i++)
    {
        int b_index = nums[i] * n / (10 + 1);
        bucket[b_index].push_back(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sort(bucket[i].begin(), bucket[i].end()); // in cpp, if the elements are large then the quick sort is called and if small number of elements than by default insertion sort is called. Whereas in the case of bucket, since the number of elements in bucket will be small, it will by default use, insetion sort. Because it take o(N) tc, in its best case.
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            nums[index++] = bucket[i][j]; // ✅ Correctly reconstructs sorted array
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your " << i << "element: ";
        cin >> arr[i];
    }

    bucketsort(n, arr);
    cout << "This is your sorted array using bucket sort: ";

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
