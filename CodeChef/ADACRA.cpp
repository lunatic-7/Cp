#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void alph()
{
    string s;
    cin >> s;
    double count = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if ((s[i] == 'U' && s[i + 1] == 'D') || (s[i] == 'D' && s[i + 1] == 'U'))
        {
            count++;
        }
    }

    cout << ceil(count/2) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        alph();
    }
    
    return 0;
}