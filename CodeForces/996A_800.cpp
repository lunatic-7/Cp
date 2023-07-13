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
    int n;
    cin >> n;

    vector<int> arr = {1, 5, 10, 20, 100};
    int i = 1, cnt = 0;
    while (n > 0)
    {
    	if (n >= arr[arr.size() - i])
    	{
    		cnt += n / arr[arr.size() - i];
    		n %= arr[arr.size() - i];
    	}
    	else i++;
    }
    
    cout << cnt << "\n"; 
    return 0;
}
