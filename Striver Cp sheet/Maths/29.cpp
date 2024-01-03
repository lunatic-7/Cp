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

    while(t--)
    {
    	int w, h;
    	cin >> w >> h;
    	int x0, x1, y0, y1;
    	vector<ll> x00, x11, y00, y11;


    	cin >> x0;
    	for (int i = 0; i < x0; ++i)
    	{
    		int temp;
    		cin >> temp;
    		x00.PB(temp);
    	}

    	cin >> x1;
    	for (int i = 0; i < x1; ++i)
    	{
    		int temp;
    		cin >> temp;
    		x11.PB(temp);
    	}

    	cin >> y0;
    	for (int i = 0; i < y0; ++i)
    	{
    		int temp;
    		cin >> temp;
    		y00.PB(temp);
    	}

    	cin >> y1;
    	for (int i = 0; i < y1; ++i)
    	{
    		int temp;
    		cin >> temp;
    		y11.PB(temp);
    	}

    	sort(x00.begin(), x00.end());
    	sort(x11.begin(), x11.end());
    	sort(y00.begin(), y00.end());
    	sort(y11.begin(), y11.end());

    	ll maxx = max(x00[x0 - 1] - x00[0], x11[x1 - 1] - x11[0]);
    	ll hx = h;

    	ll mayy = max(y00[y0 - 1] - y00[0], y11[y1 - 1] - y11[0]);
    	ll hy = w;

        cout << max(maxx * hx, mayy * hy) << "\n";
    }
    return 0;
}