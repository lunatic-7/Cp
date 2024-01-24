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
    int rear[n];

    for (int i = 0; i < n; ++i)
    {
     	cin >> rear[i];
    }

    int m;
    cin >> m;
    int back[m];

    for (int i = 0; i < m; ++i)
    {
     	cin >> back[i];
    } 


    int maxi = -1;
    int pts = 1;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		int chk = back[j] % rear[i];
    		int chk2 = back[j] / rear[i];
    		if (chk == 0 && chk2 > maxi)
    		{
                pts = 1;
                maxi = chk2;
    		}
    		else if (chk == 0 && chk2 == maxi) pts++;
    	}
    }

    cout << pts << "\n";
    return 0;
}