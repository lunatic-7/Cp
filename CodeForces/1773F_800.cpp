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
    int n, a, b;
    cin >> n >> a >> b;
    pair<int, int> pr[n + 1];

    for (int i = 1; i <= n; ++i)
    {
    	if (i == n) 
    	{
    		if (a != b) pr[i] = {a, b};
    		else if (a == b && n != 1)
    		{
    			pr[i - 1].first += a;
    			a = 0;
    			pr[i] = {a, b};
    		}
    		else pr[i] = {a, b};
    	}
    	else if (a > 0)
    	{
    		pr[i] = {1, 0};
    		a--;
    	}
    	else if (b > 0)
    	{
    		pr[i] = {0, 1};
    		b--;
    	}
    	else pr[i] = {a, b};
    }

    int draw = 0; 
    for (int i = 1; i <= n; ++i)
    {
    	if (pr[i].first == pr[i].second) draw++;
    }

    cout << draw << "\n";
    for (int i = 1; i <= n; ++i)
    {
    	cout << pr[i].first << ":" << pr[i].second << "\n";
    }

    return 0;
}