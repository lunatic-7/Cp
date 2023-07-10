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
    int n, ct = 1;
    cin >> n;

    string s;
    vector<char> ch;

    while(n--)
    {
    	cin >> s;
    	ch.PB(s[s.size() - 1]);
    }

    for (int i = 0; i < ch.size() - 1; ++i)
    {
      	if (ch[i] != ch[i + 1]) ct++;
    }

    cout << ct << "\n";
    return 0;
}