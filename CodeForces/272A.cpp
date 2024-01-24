#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int n;
    cin >> n;

    ll arr[n], sum = 0;

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	sum += arr[i];
    }

    int chk = sum % (n + 1);
    if (chk == 0) chk = n + 1;
    int pro = ((n + 1) - chk) + 1;
    int cnt = 0;
    if (pro <= 5) cnt++;

    while (pro + (n + 1) <= 5)
    {
    	cnt++;
    	pro += n + 1;
    }

    cout << 5 - cnt << "\n";

    return 0;
}