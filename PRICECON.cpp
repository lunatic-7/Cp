#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pcl()
{
    int n, k;
    cin >> n >> k;
    int prr[n];
    int tot = 0;
    int rtot = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> prr[i];
        tot += prr[i];

        if (prr[i] > k)
        {
            rtot += k;
        }
        else
        {
            rtot += prr[i];
        }
    }

    cout << tot - rtot << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        pcl();
    }
    
    return 0;
}