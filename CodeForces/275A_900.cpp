#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool isValid(int i, int j)
{
    if (i == -1 || i == 3 || j == -1 || j == 3) return false;
    return true;
}

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
   			if (swarr[i][j] & 1)
            {
                arr[i][j] = !arr[i][j];
                if (isValid(i + 1, j)) arr[i + 1][j] = !arr[i + 1][j];
                if (isValid(i, j + 1)) arr[i][j + 1] = !arr[i][j + 1];
                if (isValid(i - 1, j)) arr[i - 1][j] = !arr[i - 1][j];
                if (isValid(i, j - 1)) arr[i][j - 1] = !arr[i][j - 1];
            }
   		}
   	}

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << "";
        }
        cout << "\n";
    }


    return 0;
}