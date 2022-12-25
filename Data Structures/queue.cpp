#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // A queue aldo provides two 0(1) time operations: adding an element to the end of the queue, and
    // removing the first element in the queue, it is only possible to access the first and last element of the queue
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);

    cout << q.front() << "\n";
    cout << q.back() << "\n";
    q.pop();
    cout << q.front() << "\n";
    return 0;
}