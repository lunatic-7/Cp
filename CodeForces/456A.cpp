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

    vector<int> a(n), b(n);
    map<int, int> pq;
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    	cin >> b[i];
    }

    for (int i = 0; i < n; ++i)
    {
    	pq[a[i]] = b[i];
    }

    int qual = 0, chk = 0;
    for (auto x : pq)
    {
        if (qual > x.S)
        {
        	chk = 1;
        	break;
        }
        qual = x.S;
    }

    cout << (chk ? "Happy Alex" : "Poor Alex") << "\n";

    return 0;
}