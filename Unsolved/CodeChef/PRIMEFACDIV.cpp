// TLE

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void prime()
{
    ll a, b;
    cin >> a >> b;
    set<int> p;
    int swi = 0;

    // Finding all prime factors of b
    while (b % 2 == 0){
        p.insert(2);
        b = b/2;
    }

    for (int i = 3; i <= sqrt(b); i += 2) {
        while (b % i == 0) {

            p.insert(i);
            b = b / i;
        }
    }
    
    if (b > 2)
        p.insert(b);

    for (auto x : p)
    {
        if (a % x == 0)
        {
            swi = 1;
        }
        else
        {
            swi = 0;
            break;
        }
    }

    if (swi)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        prime();
    }
    
    return 0;
}