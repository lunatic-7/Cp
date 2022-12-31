#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Recursive function to return gcd of a and b
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    wasif();
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> arr;

    ll i = 1;
    while (arr.size() < c)
    {
        if (i % a == 0)
        {
            arr.push_back(i);
        }
        else if (i % b == 0)
        {
            arr.push_back(i);
        }
        i++;
    }
    
    ll l_elem = arr[arr.size() - 1];
    ll step;
    if (l_elem % a == 0 && l_elem % b == 0)
    {
        step = lcm(a, b); 
    }
    else if (l_elem % a == 0)
    {
        step = a;
    }
    else
    {
        step = b;
    }
    
    while (l_elem >= 0)
    {
        cout << l_elem << " ";
        l_elem -= step;
    }

    return 0;
}