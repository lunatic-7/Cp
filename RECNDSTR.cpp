#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

string lshift(string s)
{

    for (int i = 0; i < s.size() - 1; ++i)
    {
        swap(s[i], s[i + 1]);
    }

    return s;
}

string rshift(string s)
{

    for (int i = s.size() - 1; i > 0; --i)
    {
        swap(s[i], s[i - 1]);
    }

    return s;
}


int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
    	string s;
    	cin >> s;
        
    	if (lshift(s) == rshift(s)) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}