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
    int y, w;
    cin >> y >> w;

    int x = (6 - max(y, w)) + 1;
    int num = 0, den = 0;

    if (x == 6)
    {
    	num = 1;
    	den = 1;
    }
    else if (x % 2 == 0)
    {
    	num = x / 2;
    	den = 6 / 2;
    }
    else if (x % 3 == 0)
    {
    	num = x / 3;
    	den = 6 / 3;
    }
    else 
    {
    	num = x;
    	den = 6;
    }

    cout << num << "/" << den << '\n';
    return 0;
}