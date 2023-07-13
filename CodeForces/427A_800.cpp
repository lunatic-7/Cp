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

    int ct = 0, power = 0;

    for (int i = 0; i < n; ++i)
    {
    	int temp;
    	cin >> temp;

    	if (power == 0 && temp == -1) ct++;
    	else if (temp == -1) power--;
    	else power += temp;
    }

    cout << ct << "\n";
    return 0;
}