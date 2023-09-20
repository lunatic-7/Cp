#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 1e7;
int arr[N];

int main()
{
    wasif();
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
    	int temp;
    	cin >> temp;
    	arr[temp] = 1;
    }	

    for (int i = 1; i <= n; ++i)
    {
    	if (arr[i] != 1) 
    	{
    		ans = i;
    		break;
    	}
    }

    cout << ans << "\n";
    return 0;
}