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
    int T;
    cin >> T;

    while(T--)
    {
    	string s;
    	cin >> s;

    	int t1 = s[0] - '0';
    	int t2 = s[1] - '0';
    	int t3 = s[3] - '0';
    	int t4 = s[4] - '0';
    	int t_final_1 = t1 * 10 + t2;
    	int t_final_2 = t3 * 10 + t4;

    	cout << t_final_1 << " " << t_final_2 << "\n";

    	if (t_final_1 > 12 && t_final_2 <= 12)
    	{
    		cout << "DD/MM/YYYY" << "\n";
    	}
    	else if (t_final_1 <= 12 && t_final_2 > 12)
    	{
    		cout << "MM/DD/YYYY" << "\n";
    	}
    	else
    	{
    		cout << "BOTH" << "\n";
    	}
    }
    return 0;
}