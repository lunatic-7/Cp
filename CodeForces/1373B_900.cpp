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

    while(t--)
    {
    	string s;
    	cin >> s;

    	int zero = count(s.begin(), s.end(), '0');
    	int one = s.size() - zero;
    	int mini = min(zero, one);

    	if (mini & 1) cout << "DA" << "\n";
    	else cout << "NET" << "\n";
    }
    return 0;
}