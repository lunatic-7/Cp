#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dekhte()
{
    string s;
    cin >> s;
    int sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            continue;
        }
        else
        {
            sum += s[i] - '0';
        }
    }

    cout << sum << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dekhte();
    }
    
    return 0;
}