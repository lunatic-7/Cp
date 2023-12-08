#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
int ANS = 0;

int recSolve(int s, int ans)
{
	// Base case
	if (s < 10) return 0;

	int kaam = s / 10;
	int naaKaam = s % 10;
	ans += kaam;
	ANS = ans;

	if (kaam + naaKaam >= 10)
	{
		recSolve(kaam + naaKaam, ans);
	}

	return ANS;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int s;
		int ans = 0;
    	cin >> s;
    	cout << s + recSolve(s, ans) << "\n";
    }
    return 0;
}