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

    // if no is div by 60
    // then factors of 60 should also divide that number
    // 60 = 2 * 3 * 10
    // 10 -> last digit is 0
    // 2 -> last digit (before 0's) should be even
    // 3 -> sum of numbers should be div by 3

    while (n--)
    {
    	string s;
    	cin >> s;

    	bool zero = false;
    	ll digsum = 0, even = 0;
    	for (int i = 0; i < s.size(); ++i)
    	{
    		// check is s contains at least one 0.
    		if (s[i] == '0') zero = true;

    		// check if any even no is present at last 2nd position when we solve the permutation
    		
    		if ((s[i] - '0') % 2 == 0) even++;

    		// check sum of digits is div by 3
    		digsum += s[i] - '0';
    	}

    	if (zero && even > 1 && digsum % 3 == 0) cout << "red" << "\n";
    	else cout << "cyan" << "\n";
    }
    return 0;
}