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

    int a = abs(n);
    if (n < 0)
    {
    	if (a % 10 > ((a / 10) % 10)) cout << -1 * (a / 10) << "\n";
    	else 
    	{
    		int temp = a / 10;  // 23
    		int temp1 = a % 10;  // 2
    		int temp2 = temp % 10;  // 3
    		temp = temp - temp2;  // 20
    		temp = temp + temp1;  // 22
    		cout << -1 * temp << "\n"; 
    	}
    }
    else cout << a << "\n";
    return 0;
}