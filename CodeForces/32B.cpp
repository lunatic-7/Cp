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
    string s;
    cin >> s;

    int i = 0;
    while(i < s.size())
    {
    	if (s[i] == '.')
    	{
    		cout << 0;
    		i++;
    	}
    	else if (s[i] == '-' && s[i + 1] == '.')
    	{
    		cout << 1;
    		i+=2;
    	}
    	else 
    	{
    		cout << 2;
    		i+=2;
    	}
    }
    return 0;
}