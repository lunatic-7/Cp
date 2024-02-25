#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll csum(string &s)
{
    ll sum = 0;
    for (int i = 0; i < s.size(); ++i)
    {
    	if (s[i] == 'L') sum += i;
    	else sum += (s.size() - 1) - i;
    }

    return sum;
}

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	string s;
    	cin >> s;

    	ll k = 0;
    	// Initial sum
    	ll ans = csum(s);
    	ll chng = n / 2;  // n / 2 se km wale R and n/2 aur baad wale L;

    	int i = 0, j = n - 1;
    	while (i <= j)
    	{
    		if (i < chng && s[i] != 'R') 
    		{
    			ans += (n - 1) - i; // aage ke joda
    			ans -= i;  // peeche ka ghta
    			cout << ans << " ";
    			k++;
    		}
    		if (j > chng && s[j] != 'L')
    		{
    			ans += j;
    			ans -= (n - 1) - j;
    			cout << ans << " ";
    			k++;
    		}
    		
    		if ((j == chng && (n % 2 == 0)) && s[j] != 'L')
    		{
    			ans += j;
    			ans -= (n - 1) - j;
    			cout << ans << " ";
    			k++;
    		}
    		i++;
    		j--;
    	}

    	for (int i = k; i < n; ++i)
    	{
    		cout << ans << " ";
    	}
    	cout << "\n";
    }
    return 0;
}