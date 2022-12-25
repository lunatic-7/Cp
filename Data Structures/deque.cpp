#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // A deque is a dynamic array whose size can be efficiently changed at both ends of the array
    deque<int> d;

    d.push_back(5);
    d.push_back(2);
    d.push_front(7); // adds in the starting of an array
    d.pop_back();  // removes last element from the array
    d.pop_front();  // removes first element from the array
    
    for (auto x : d)
    {
        cout << x << " ";
    }
    
    return 0;
}