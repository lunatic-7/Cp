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

    // Queue -> It follows FIFO (First in first out) principle

    // Implementing a queue
    queue<string> q;

    // Adding in a queue
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    q.push("mno");

    // Emptying a queue
    while (!q.empty())
    {
        // Accessing front element
        cout << q.front() << "\n";
        // removing front element
        q.pop();
    }
    
    return 0;
}