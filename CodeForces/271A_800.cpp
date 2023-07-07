#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool uchk(vector<int> &chk)
{
	int cheking = 1;
	set<int> s;
	for (int i = 0; i < chk.size(); ++i)
	{
		s.insert(chk[i]);
	}

	if (s.size() == chk.size()) return true;
	else return false;
}

int main()
{
    wasif();
    int year, cyear;
    cin >> year;
    cyear = year;
    int chk = 0;

    while(1)
    {
    	year++;
    	cyear++;
    	vector<int> yp;
    	while(cyear > 0)
    	{
    		yp.PB(cyear % 10);
    		cyear /= 10;
    	}

    	if (uchk(yp)) break;

    	cyear = year;
    }

    cout << year << "\n";
    return 0;
}