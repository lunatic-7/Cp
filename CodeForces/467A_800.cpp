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

 	int cnt = 0;
    while(n--)
    {
    	int i, j;
 	   	cin >> i >> j;

    	if (j - i >= 2) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}