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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int t_toast = (k * l) / nl;
    int t_lime = c * d;
    int salt = p / np;

    int mini = min(t_toast, t_lime);
    mini = min(mini, salt);
    cout << mini / n << "\n";

    return 0;
}