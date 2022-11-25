#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void carl()
{
    int x;
    cin >> x;
    string s;
    cin >> s;

    int carlp = 0;
    int chefp = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'C')
        {
            carlp+=2;
        }
        else if (s[i] == 'N')
        {
            chefp+=2;
        }
        else
        {
            carlp++;
            chefp++;
        }
    }

    if (carlp > chefp)
    {
        cout << 60 * x << "\n";
    }
    else if (carlp == chefp)
    {
        cout << 55 * x << "\n";
    }
    else
    {
        cout << 40 * x << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        carl();
    }
    
    return 0;
}