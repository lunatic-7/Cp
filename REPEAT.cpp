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
        int n, k, s;
        cin >> n >> k >> s;

        vector<int> v;

        for (int i = 1; i <= n + k; ++i)
        {
            if (i & 1) v.PB(i);
        }

        for (auto &i : v)
        {
            cout << i << " ";
        }
        cout << "\n";

        int i = 0;
        int temp, sum = 0;
        int ans = 10000;
        while (i < v.size())
        {
            // temp = v[i];
            sum += v[i] * k;
            int j = 0;
            while(j < v.size())
            {
                cout << i << " " << j << " " << v[i] << " " << sum << "\n";
                if (sum == s)
                {
                    ans = v[i];
                    break;
                }


                if (j == i)
                {
                    j++;
                    // sum += v[j];
                    continue;
                }
                sum += v[j];
                j++;
            }
            i++;
            sum = 0;
        }

        cout << ans << "\n";
    }
    return 0;
}