#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        if (isPrime(n))
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    
    return 0;
}