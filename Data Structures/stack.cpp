#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // A stack is a data structure two O(1) time operations: adding an element from the top and removing
    // an element from the top, it is only possible to access the top element of a stack
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);

    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";

    return 0;
}