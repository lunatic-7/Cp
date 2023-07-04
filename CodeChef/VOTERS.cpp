#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n1, n2, n3, temp, count = 0;
    cin >> n1 >> n2 >> n3;
    map<int, int> m;

    for (int i = 0; i < (n1 + n2 + n3); i++)
    {
        cin >> temp;
        m[temp]++;
    }

    for (auto x : m)
    {
        if (x.second >= 2)
        {
            count++;
        }
    }
    
    cout << count << "\n";
    for (auto x : m)
    {
        if (x.second >= 2)
        {
            cout << x.first << "\n";
        }
    }
    
    return 0;
}