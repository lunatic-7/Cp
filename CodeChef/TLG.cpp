#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n;
    cin >> n;
    int S[n], T[n];
    int cs = 0, ct = 0;
    int temp = 0;
    int diff = 0; int winner = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> S[i] >> T[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (S[i] > T[i])
        {
            cs += S[i];
            ct += T[i];
            temp = cs - ct;
            if (diff < temp)
            {
                diff = temp;
                winner = 1;
            }    
        }
        
        if (T[i] > S[i])
        {
            cs += S[i];
            ct += T[i];
            temp = ct - cs;
            if (diff < temp)
            {
                diff = temp;
                winner = 2;
            }
        }
    }

    cout << winner << " " << diff << "\n";

    return 0;
}