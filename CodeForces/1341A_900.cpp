#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int grain, a, b, c, d;
    	cin >> grain >> a >> b >> c >> d;

    	int chk = 0;
    	int min = a - b;
    	int max = a + b;
    	if ((grain * min >= c - d) && (grain * min <= c + d)) chk = 1;
    	if ((grain * max >= c - d) && (grain * max <= c + d)) chk = 1;
    	if ((grain * a >= c - d) && (grain * a <= c + d)) chk = 1;
    	if ((grain * b >= c - d) && (grain * b <= c + d)) chk = 1;


    	cout << (chk == 1 ? "Yes" : "No") << "\n";
    }
    return 0;
}