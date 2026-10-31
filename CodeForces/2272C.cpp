#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 
bool chk(vector<int> &arr, int n, int x, int k)
{
    vector<int> akela;

    for (int i = 0; i < n; ++i)
    {
        bool swi = 0;
        if (i > 0) if (arr[i] - arr[i - 1] <= k) swi = 1;
        if (i < n - 1) if (arr[i + 1] - arr[i] <= k) swi = 1;

        if (!swi) akela.PB(arr[i]);
    }

    int need = 0;
    for (int i = 0; i < akela.size();)
    {
        if ((i + 1 != akela.size()) && akela[i + 1] - akela[i] <= 2*k)
        {
            need++;
            i += 2;  // 2 bdho
        }
        else
        {
            need++;
            i++;
        }
    }

    return need <= x;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, x;
    	cin >> n >> x;

    	vector<int> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        int low = 1, high = 1e9;
        int ans = high;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (chk(arr, n, x, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << "\n";
    }

    return 0;
}