#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;


vector<int> query(int x, int y)
{
    cout << "? " << x << " " << y << endl;

    vector<int> response(y - x + 1);
    for (int i = 0; i < (y - x + 1); ++i)
    {
    	cin >> response[i];
    }
    return response;
}

void answer(int x)
{
	cout << "! " << x << endl;
}

bool checker(int mid, int start)
{
	int ct = 0;
	vector<int> response = query(start, mid);
	for (int i = 0; i < response.size(); ++i)
	{
		if (response[i] >= start && response[i] <= mid) ct++;
	}

	if (ct & 1) return true;
	return false;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	int left = 1, right = n;
    	int start = 1;
    	int ans;

    	while (left <= right)
    	{
    		int mid = (left + right) / 2;
    		if (checker(mid, start))
    		{
    			ans = mid;
    			right = mid - 1;
    		}
    		else
    		{
    			left = mid + 1;
    			start = left;
    		}
    	} 

    	answer(ans);
    }
    return 0;
}