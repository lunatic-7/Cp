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
	    int s;
	    cin >> s;

	    vector<int> arr;
	    int i = 9;
	    while (s > i)
	    {
	        arr.PB(i);
	        s -= i;
	        i--;
	    }

	    if (s > 0) arr.PB(s);
	    for (int i = arr.size() - 1; i >= 0; --i)
	    {
	    	cout << arr[i];
	    }
	    cout << "\n";    	
    }

    return 0;
}