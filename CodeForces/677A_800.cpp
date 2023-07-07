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
    int n, h;
    cin >> n >> h;
    int temp, width = 0;

    for (int i = 0; i < n; ++i)
    {
    	cin >> temp;
    	if (temp > h) width += 2;
    	else width++;
    }

    cout << width << "\n";

    return 0;
}