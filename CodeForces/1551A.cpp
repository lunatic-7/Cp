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
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	int num = n / 3;
    	int one = num, two = num;

    	int toAdd = n % 3;
    	if (toAdd == 2) two++;
    	else if (toAdd == 1) one++;

   		cout << one << " " << two << "\n";
    }
    return 0;
}