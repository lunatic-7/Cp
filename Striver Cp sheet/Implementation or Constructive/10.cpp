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
    int n;
    cin >> n;
    vector<int> chk(n);
    bool hard = false;

    for (int i = 0; i < n; ++i)
    {
    	cin >> chk[i];
    }

    for (int i = 0; i < n; ++i)
    {
    	if (chk[i] == 1)
    	{
    		hard = true;
    		break;
    	}
    }

    if (hard) cout << "HARD" << "\n";
    else cout << "EASY" << "\n";

    return 0;
}