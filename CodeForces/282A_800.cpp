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

    int x = 0;
    string s;

    while(n--)
    {
     	cin >> s;
     	if (s[0] == '+' || s[s.size() - 1] == '+') x++;
     	else x--;
    }

    cout << x << "\n";
    return 0;
}