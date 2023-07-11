#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 100+10;
vector<bool> v(N);

int main()
{
    wasif();
    int n;
    cin >> n;

    int size1, size2;

    cin >> size1;
    int temp;
    for (int i = 0; i < size1; ++i)
    {
    	cin >> temp;
    	v[temp] = true;
    }

    cin >> size2;
    for (int i = 0; i < size2; ++i)
    {
    	cin >> temp;
    	v[temp] = true;
    }

    bool chk = true;
    for (int i = 1; i <= n; ++i)
    {
    	if (!v[i]) chk = false;
    }

    if (chk) cout << "I become the guy." << "\n";
    else cout << "Oh, my keyboard!" << "\n";

    return 0;
}