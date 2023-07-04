#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void musk()
{
    int n;
    cin >> n;
    string f_name[n], l_name[n];
    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> f_name[i] >> l_name[i];
        m[f_name[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (m[f_name[i]] >= 2)
        {
            cout << f_name[i] << " " << l_name[i] << "\n";
        }
        else
        {
            cout << f_name[i] << "\n";
        }
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        musk();
    }
    
    return 0;
}