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

// https://www.youtube.com/watch?v=UDCM_Lruo-o&t=58s
int main()
{
    wasif();
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; ++i) // 1 based
    {
        cin >> arr[i];
    }

    int ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        int node = arr[i];
        int dep = 1;
        while (node != -1)
        {
            node = arr[node];
            dep++;
            ans = max(ans, dep);
        }
    }

    cout << ans << "\n";

    return 0;
}