#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n)
{
    int chk = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            chk = 0;
            break;
        }
    }

    return chk;
}

void ab()
{
    int a, b;
    cin >> a >> b;

    if (isPrime(a + b))
    {
        cout << "Alice" << "\n";
    }
    else
    {
        cout << "Bob" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ab();
    }
    
    return 0;
}