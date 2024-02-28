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
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	ll rooms = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin >> temp;
    		if (temp % 2 == 0) rooms += temp / 2;
    		else rooms += (temp / 2) + 1;
    	}

        cout << rooms << '\n';
    }
    return 0;
}