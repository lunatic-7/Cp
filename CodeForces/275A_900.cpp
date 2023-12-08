#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED

int main()
{
    wasif();
    bool arr[3][3] = {
    	{1,1,1},
    	{1,1,1},
    	{1,1,1}
    };

    int swarr[3][3];

    for (int i = 0; i < 3; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cin >> swarr[i][j];
    	}
    }

   	for (int i = 0; i < 3; ++i)
   	{
   		for (int j = 0; j < 3; ++j)
   		{
   			if (swarr[i][j] & 1) arr[i][j]
   		}
   	}


    return 0;
}