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
    ll n;
    cin >> n;
    vector<ll> arr;

    while (n > 0)
    {
    	int temp;
    	temp = n % 10;
    	if (n == 9) arr.PB(9);
    	else if (temp >= 5)
    	{
    		arr.PB(9 - temp);
    	}
    	else 
    	{
    		arr.PB(temp);
    	}
    	n /= 10;
    }

    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i)
    {
    	cout << arr[i];
    }

    return 0;
}