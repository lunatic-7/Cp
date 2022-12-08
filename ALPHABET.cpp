#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    string s;
    cin >> s;
    int n;
    cin >> n;
    set<char> mano;
    for (int i = 0; i < s.size(); i++)
    {
        mano.insert(s[i]);
    }

    while (n--)
    {
        int chk = 1;
        string w;
        cin >> w;
        for (int i = 0; i < w.size(); i++)
        {
            if (!mano.count(w[i]))
            {
                chk = 0;
                break;
            }
        }

        if (chk)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
    return 0;
}
