#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    char m, f;
    cin >> m >> f;

    if (m == 'G' && f == 'G')
    {
        cout << "G" << "\n";
    }
    else if (m == 'R' || f == 'R')
    {
        cout << "R" << "\n";
    }
    else
    {
        cout << "B" << "\n";
    }
    
    return 0;
}