#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int F(string para)
{
	int balance = 0;
	int max_balance = 0;

	for (int i = 0; i < para.size(); ++i)
	{
		if (para[i] == '(') balance++;
		if (para[i] == ')') balance--;
		max_balance = max(max_balance, balance);
	}
	return max_balance;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
    	string para;
    	cin >> para;
    	int fpar = F(para);

    	string ans;
    	for (int i = 0; i < fpar; ++i)
    	{
    		ans.PB('(');
    	}

    	for (int i = 0; i < fpar; ++i)
    	{
    		ans.PB(')');
    	}

    	cout << ans << "\n";
    }
    return 0;
}