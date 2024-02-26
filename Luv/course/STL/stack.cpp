#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    // Stack -> It follows LIFO (Last in first out) principle

    // Implementing a stack
    stack<int> s;
    
    // Adding in a stack
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Emptying a stack
    while (!s.empty())
    {
        // Acceesing top element
        cout << s.top() << endl;
        // Removing top element
        s.pop();
    }
    
    return 0;
}