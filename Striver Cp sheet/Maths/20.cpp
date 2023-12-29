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
    int x;
    cin >> x;
    int step = 5, cnt = 0;

    while (x - step >= 0)
    {
    	cnt++;
    	x -= step;
    }

    if (x > 0) cnt++;

    cout << cnt << "\n";
    return 0;
}