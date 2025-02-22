#include <iostream>
#include <queue>
using namespace std;

// Default priority queue is always max heap

int main()
{

    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << pq.size() << endl;
    cout << pq.top() << endl;

    while (pq.empty() == false)
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}