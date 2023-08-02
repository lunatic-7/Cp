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
    string s;
    cin >> s;

    int ct_0 = count(s.begin(), s.end(), '0');
    int ct_1 = n - ct_0;
    int ans = n - min(ct_0, ct_1) * 2;
    cout << ans << '\n';
    return 0;
}