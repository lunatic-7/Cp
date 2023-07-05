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
    string in, out;

    cin >> in;

    sort(in.begin(), in.end());

    for (int i = 0; i < in.size(); ++i)
    {
    	if (in[i] != '+' && i != in.size() - 1)
    	{
    		out.PB(in[i]);
    		out.PB('+');
    	}
    	else if (i == in.size() - 1)
    	{
    		out.PB(in[i]);
    	}
    }

    cout << out << "\n";
    return 0;
}