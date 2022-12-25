#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // A priority queue maintains a set of elements. The supported operations are insertion and depending
    // upon the type of the queue, retrievel or removal of either the minimum or maximum element. Insertion and 
    // removal take O(log n) time, and retrievel takes O1 time.
    priority_queue<int> q;
    q.push(2);
    q.push(4);
    q.push(7);
    q.push(5);

    cout << q.top() << "\n";
    q.pop();
    cout << q.top() << "\n";
    q.pop();
    q.push(6);
    cout << q.top() << "\n";

    return 0;
}