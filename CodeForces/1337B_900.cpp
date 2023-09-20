#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
int dp[35][35];

bool defeat(int hit, int voids, int light)
{
    if (hit < 1) return 1;
    if (voids == 0 && light == 0) return 0;
    if (dp[voids][light] != -1) return dp[voids][light];
    
    bool isPos = 0;
    // If Void Spell
    if (voids) isPos = defeat((hit / 2) + 10, voids - 1, light);

    // If Light Spell
    if (light) isPos |= defeat(hit - 10, voids, light - 1);

    return dp[voids][light] = isPos;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        memset(dp, -1, sizeof(dp));
        int hit, voids, light;
        cin >> hit >> voids >> light;
        bool ans = defeat(hit, voids, light);
        cout << (ans ? "YES" : "NO") << "\n";        
    }

    return 0;
}