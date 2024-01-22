#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int linearS(int b, int arr[], int n)
{
	int vas = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == b)
		{
			vas = i;
			break;
		}
	}

	return vas;
}


int main()
{
    wasif();
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int query;
    cin >> query;
    int vasy = 0, pety = 0;

    while (query--)
    {
    	int b;
    	cin >> b;

    	int vasya = linearS(b, arr, n);
    	vasy += vasya + 1;
    	pety += n - vasya;
    }

    cout << vasy << " " << pety << "\n";
    return 0;
}