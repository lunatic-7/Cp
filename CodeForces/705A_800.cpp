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
    string s1 = "I hate", s2 = "I love", s3;

    for (int i = 1; i <= n; ++i)
    {
    	if (i & 1) s3 += s1;
    	else s3 += s2;

    	if (i == n) s3 += " it";
    	else s3 += " that ";
    }

    cout << s3 << "\n";
    return 0;
}