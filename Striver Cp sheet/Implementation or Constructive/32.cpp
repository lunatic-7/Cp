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
    int k;
    cin >> k;
    string s;
    cin >> s;
    int arr[27] = {0};

    for (int i = 0; i < s.size(); ++i)
    {
        arr[(s[i] - '0') - 48]++;
    }

    bool valChk = true;
    for (int i = 1; i <= 26; ++i)
    {
        if (arr[i] % k != 0) valChk = false;
    }

    string ans = "";
    if (valChk)
    {
        for (int i = 1; i <= 26; ++i)
        {
            if (arr[i] != 0)
            {
                ans += string(arr[i] / k, (i + 48) + '0');             
            }
        }
        
        for (int i = 0; i < k; ++i)
        {
            cout << ans;
        }
    }
    else cout << -1 << "\n";


    return 0;
}