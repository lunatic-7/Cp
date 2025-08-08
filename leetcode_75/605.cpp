#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    vector<int> flowerbed = {1,0,0,0,1,0,0};
    int n = 2;

    vector<int> ct0;
    int cnt = 0;
    int poss_flow = 0;
    for (int i = 0; i < flowerbed.size(); ++i)
    {
    	if (flowerbed[i] == 0) cnt++;
    	if (flowerbed[i] == 1 && cnt == 2 && i == 2) 
    	{
    		poss_flow++;
    		cnt = 0;
    	}
    	if (flowerbed[i] == 0 && cnt == 2 && i == flowerbed.size() - 1) 
    	{
    		poss_flow++;
    		cnt = 0;
    	}
    	else
    	{
    		if (cnt >= 3) ct0.PB(cnt);
    		cnt = 0;
    	}
    }

    for (int i = 0; i < ct0.size(); ++i)
    {
    	if (ct0[i] % 2 == 0) poss_flow += (ct0[i] / 2) - 1;
    	else poss_flow += ct0[i] / 2;
    }

    if (poss_flow >= n) cout << true << "\n";
    else cout << false << "\n";
    return 0;
}