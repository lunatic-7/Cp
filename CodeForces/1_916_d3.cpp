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
    	int min;
    	cin >> min;
    	string s;
    	cin >> s;
    	int arr[26];

    	for (char i = 'A'; i <= 'Z'; ++i)
    	{
    		arr[i - 65] = i - 64;
    	}

    	for (int i = 0; i < min; ++i)
    	{
    		arr[s[i] - 65]--;
    	}

        int cnt = 0;
    	for (int i = 0; i < 26; ++i)
    	{
    		if (arr[i] <= 0) cnt++;
    	}

    	cout << cnt << "\n";
    }
    return 0;
}