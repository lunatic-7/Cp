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
    string s1, s2;
    cin >> s1 >> s2;
    int chk = 0;

    for (int i = 0; i < s1.size(); ++i)
    {
    	if ((s1[i] | ' ') > (s2[i] | ' '))
    	{
    		chk = 1;
    		break;
    	}
    	else if ((s1[i] | ' ') < (s2[i] | ' '))
    	{
    		chk = -1;
    		break;
    	}
    }

    cout << chk << "\n";
    return 0;
}