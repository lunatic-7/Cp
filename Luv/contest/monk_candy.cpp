#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void candy()
{
    int n, k;
    cin >> n >> k;
    multiset<ll> bag;
    for (int i = 0; i < n; i++)
    {
        ll no_candy;
        cin >> no_candy;
        bag.insert(no_candy);
    }

    ll candy_count = 0;
    for (int i = 0; i < k; i++)
    {
        auto it = --(bag.end());
        candy_count += *it;
        bag.erase(it);
        bag.insert(*it / 2);
    }
    
    cout << candy_count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;
    while (T--)
    {
        candy();
    }
    
    return 0;
}