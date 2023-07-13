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
    multiset<char> c1, c2;

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (int i = 0; i < s1.size(); ++i)
    {
    	c1.insert(s1[i]);
    }

    for (int i = 0; i < s2.size(); ++i)
    {
    	c1.insert(s2[i]);
    }

    for (int i = 0; i < s3.size(); ++i)
    {
    	c2.insert(s3[i]);
    }

    bool chk = true;


    if (c1 != c2)  // Two sets can be compared like this (==, != etc)
    {
     	chk = false;
    }

    if (chk) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}