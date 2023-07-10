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
    string s1, s2, s3;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); ++i)
    {
    	if (s1[i] == s2[i]) s3.PB('0');
    	else s3.PB('1');
    }

    cout << s3 << "\n";
    return 0;
}