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
 

int main()
{
    wasif();
    int t;
    cin >> t;
    
    while (t--)
    {
    	int n;
    	cin >> n;

        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        // Count of longest subsequenece is ans
        int ans = 1, ct = 1;

        for (int i = 1; i < n; ++i)
        {
            if (arr[i] - arr[i - 1] == 1) ct++;
            else if (arr[i] - arr[i - 1] == 0) continue;
            else ct = 1;
            
            ans = max(ct, ans);
        }

        cout << ans << "\n";
    }

    return 0;
}