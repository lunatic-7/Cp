#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int binExpRecur(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    ll res = binExpRecur(a, b / 2);
    // If odd
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
}

int main()
{
    wasif();
    int a = 2, b = 13;

    // Using pow function, but we avoid using pow as it calculates in double
    // which can give precision errors.
    cout << pow(a, b) << "\n";
    // Using bianary exponentiation in Recursive method
    cout << binExpRecur(a, b) << "\n";
    return 0;
}