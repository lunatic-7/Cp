#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;


// Logic

// 128 64 32 16 8 4 2 1

// 1    0  0  0 0 0 0 0  (even num of digits)
// If Even number of digits (n) then: ans = n / 2, If all other bits gets set
// still it won't exceed 256 (4^4). So, ans will be n / 2 only
// Trains left: 1 4 16 64

// 0    1  0  0 0 0 0 0  (odd num of digits)
// If Odd number of digits (n) then: ans = n / 2 (when only MSB is set)
// Trains left: 1 4 16
// If any other bit gets set it will exceed from 64 and then we will consider 64 as well
// Trains left: 1 4 16 64


int main()
{
    wasif();
    string s;
    cin >> s;

    int ans = s.size() / 2;
    int cnt = 0;
    if (s.size() % 2 == 0)
    {
    	cout << ans << "\n";
    }
    else 
    {
    	for (auto a : s) if (a == '1') cnt++;
    	ans += (cnt > 1);  // true means 1, so +1
    	cout << ans << "\n";
    }

    return 0;
}