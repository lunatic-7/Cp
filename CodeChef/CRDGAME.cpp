#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gamer()
{
    int n;
    cin >> n;
    ll crr[n], mrr[n];
    int chf = 0, mon = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> crr[i] >> mrr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int csum = 0, msum = 0;

        while (crr[i] > 0)
        {
            csum += crr[i] % 10;
            crr[i] = crr[i] / 10;
        }

        while (mrr[i] > 0)
        {
            msum += mrr[i] % 10;
            mrr[i] = mrr[i] / 10;
        }
        
        if (csum > msum)
        {
            chf++;
        }
        else if (msum > csum)
        {
            mon++;
        }
        else
        {
            chf++;
            mon++;
        }
    }

    if (chf > mon)
    {
        cout << 0 << " " << chf << "\n";
    }
    else if (mon > chf)
    {
        cout << 1 << " " << mon << "\n";
    }
    else
    {
        cout << 2 << " " << mon << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        gamer();
    }
    
    return 0;
}