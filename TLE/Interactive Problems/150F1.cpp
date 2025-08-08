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

int query(int x, int y)
{
    cout << "? " << x << " " << y << endl;
    int response;
    cin >> response;
    return response;
}

void answer(int x)
{
	cout << "! " << x << endl;
}

bool checker(int mid, int k)
{
	int start = 1;
	int hona = (mid - start) + 1;
	int hai = query(start, mid);
	int net = hona - hai;

	if (net >= k) return true;
	return false;
}

int main()
{
    wasif();
    int n, T;
    cin >> n >> T;
    int k;
    cin >> k;

    int left = 1, right = n, ans;
    while (left <= right)
    {
    	int mid = (left + right) / 2;
    	if (checker(mid, k))
    	{
    		ans = mid;
    		right = mid - 1;
    	}
    	else left = mid + 1;
    }

    answer(ans);
    return 0;
}