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
    int t;
    cin >> t;

    while (t--)
    {
    	int to_time = 24 * 60;
    	int h, m;
    	cin >> h >> m;
        
        int time_now = (h * 60) + m;
        cout << to_time - time_now << "\n";

    }
    return 0;
}