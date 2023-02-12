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
    int T;
    cin >> T;

    while (T--)
    {
    	int n;
    	cin >> n;
    	int cnt = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin >> temp;
    		if (temp == 1) cnt++;
    	}

        if ((cnt & 1) && (n & 1)) cout << "YES\n";
        else if (!(cnt & 1) && !(n & 1)) cout << "YES\n";
        else cout << "NO\n";
    
    }
    return 0;
}