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
    int limak, bob, cnt = 0;
    cin >> limak >> bob;

    while (limak <= bob)
    {
    	limak *= 3;
    	bob *= 2;
    	cnt++;
    }

    cout << cnt << "\n";
    return 0;
}