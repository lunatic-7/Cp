#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    
    int num = 5;
    vector<vector<int>> pascal;
    vector<int> numarr;

    for (int i = 1; i <= 30; ++i)
    {
    	if (i == 1)
    	{
    		numarr.PB(1);
    		pascal.PB(numarr);
    	}
    	else if (i == 2)
    	{
    		numarr.PB(1);
    		numarr.PB(1);
    		pascal.PB(numarr);
    	}
    	else
    	{
    		int tosum = i - 2;

    		numarr.PB(1);
    		for (int k = 0; k < pascal[tosum].size() - 1; ++k)
    		{
    		    int temp = 0;
    			temp += pascal[tosum][k] + pascal[tosum][k + 1];
    			numarr.PB(temp);
    		}
            numarr.PB(1);

            pascal.PB(numarr);
    	}

    	numarr.clear();
    }

    for (int i = 0; i < num; ++i)
    {
    	for (int j = 0; j < pascal[i].size(); ++j)
    	{
    		cout << pascal[i][j] << " "; 
    	}
    	cout << "\n";
    }

    return 0;
}