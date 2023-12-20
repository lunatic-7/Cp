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
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	int arr[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        int chk = 0;
        int i = 0, j = i + 1;
        while (1)
        {
            if (j == (n - 2))
            {
            	i++;
            	j = i + 1;
            }
        	if (i == (n - 3)) break;
            cout << "i " << i << " j " << j << "\n"; 

        	cout << (arr[i] + arr[j])  << "\n";
        	cout << (arr[j + 1] + arr[j + 2]) << "\n";
            if ((arr[i] + arr[j]) != (arr[j + 1] + arr[j + 2]))
            {
            	chk = 1;
            	break;
            }
            else
            {
            	j++;
            }  

        }

        if (chk) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}