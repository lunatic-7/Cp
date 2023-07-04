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
    	int n, k;
    	cin >> n >> k;
    	vector<int> stud(n);
    	vector<int> hsh(n + 1, 0);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> stud[i];
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		if ((i + 1) == stud[i]) hsh[stud[i]] = -1;
    		else if (((i + 1) != stud[i]) && hsh[stud[i]] != -1) hsh[stud[i]]++;
    	}

        int valid = 0;

    	for (int i = 0; i < hsh.size(); ++i)
    	{
    		if (hsh[i] >= k) valid++;
    	}

    	cout << valid << "\n";

    }
    return 0;
}