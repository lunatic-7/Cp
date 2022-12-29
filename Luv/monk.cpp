#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    wasif();
    string s;
    ll sum = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            sum += s[i] - 32;
        }
        else
        {
            sum -= s[i] + 32;
        }
    }
    
    if (isPrime(abs(sum)))
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    
    return 0;
}