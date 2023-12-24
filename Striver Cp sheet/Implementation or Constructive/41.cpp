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
    int n, x, y;
    cin >> n >> x >> y;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int pt = 0;
    int chk;
    while (pt < n)
    {
    	int lp = pt + 1;
    	chk = 1;
    	int tak = lp + y;
    	if (lp + y > n) tak = n;
    	for (int i = lp; i < tak; ++i)
    	{
    		if (arr[pt] > arr[i])
    		{
    			chk = 0;
    			pt = i;
    			break;
    		}
    	}
   
    	if (chk == 1) break;
    }

    cout << pt + 1 << "\n";

    return 0;
}