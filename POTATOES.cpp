#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void potato()
{
    int a, b;
    cin >> a >> b;

    int i = a + b;
    while (1)
    {
        i++;
        if (isPrime(i))
        {
            break;
        }
    }

    cout << i - (a + b) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        potato();
    }
    
    return 0;
}