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


// High level backwards thinking.
int main() 
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        vector<int> valid(n - 4);
        for (int i = 0; i < n - 4; i++) {
            ll sum = arr[i] + arr[i + 2] - arr[i + 4];
            valid[i] = sum;
        }

        map<int, int> mp;
        ll ans = 0;
        for (int i = 0; i < valid.size(); ++i)
        {
            ans += mp[valid[i]];

            if (i >= 2) if (valid[i - 2] == valid[i]) ans--;
            if (i >= 4) if (valid[i - 4] == valid[i]) ans--;

            mp[valid[i]]++;
        }

        cout << ans << "\n";
    }
    return 0;
}