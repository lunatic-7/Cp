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
    int line[3];

    for (int i = 0; i < 3; ++i)
    {
    	cin >> line[i];
    }

    sort(line, line + 3);

    cout << (line[1] - line[0]) + (line[2] - line[1]) << "\n";
    return 0;
}