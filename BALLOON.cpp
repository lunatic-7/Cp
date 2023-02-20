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

    while (T--)
    {
    	int n;
    	cin >> n;

    	int ques[n];
    	vector<int> final(7, 0);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> ques[i];
    	}

    	int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
	    	if (all_of(final.begin(), final.end(), [] (int x){return x > 0;})) break;
	    	else if (ques[i] > 0 && ques[i] < 8) final[ques[i] - 1] = 1;        	
        	cnt++;
        }


        cout << cnt << "\n";
    }
    return 0;
}