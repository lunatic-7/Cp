#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mush()
{
    int p;
    cin >> p;

    int i = 1;
    int count = 0;
    int fcount = 0;
    while (i <= p && count < 12)
    {
        i *= 2;
        count++;
    }

    while (p > 0)
    {
        if (p >= pow(2, count - 1))
        {
            p -= pow(2, count - 1);
            fcount++;
        }
        else
        {
            count--;
        }
    }

    cout << fcount << "\n";
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mush();
    }
    
    return 0;
}