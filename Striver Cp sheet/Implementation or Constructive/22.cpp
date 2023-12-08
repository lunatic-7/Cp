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
    string tab;
    cin >> tab;

    string hand[5];
    int chk = 0;

    for (int i = 0; i < 5; ++i)
    {
    	cin >> hand[i];
    	if (tab[1] == hand[i][1]) chk = 1;
    	if (tab[0] == hand[i][0]) chk = 1;
    }

    if (chk == 1) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    
    return 0;
}