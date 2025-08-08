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

bool chk(int valley, vector<int> &arr)
{
    int valley_ind = valley - 1;
    int j = arr.size() - 1;
    bool ok = 1;

    for (int i = valley_ind; i >= 0; i--, j--)
    {
        ok &= (arr[i] < arr[j] && arr[i] < arr[j - 1]);
    }

    return ok;
}

int main()
{
    wasif();
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    int left = 0, right = (n + 1) / 2 - 1; // max valley possible
    int ans = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (chk(mid, arr))
        {
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }

    vector<int> new_arr(n);
    int elem = ans - 1;
    int ind = arr.size() - 1;

    for (int i = 0; i < n; ++i)
    {

        if ((i & 1) && elem >= 0) new_arr[i] = arr[elem--];
        else new_arr[i] = arr[ind--];
    }

    cout << ans << "\n";
    showVect(new_arr);

    return 0;
}