// SPOJ WEBSITE (Question name -> AGGRCOW) Using Binary search
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N = 1e5+10;
int n, cows;
int positions[N];

bool canPlaceCows(int minDist)
{
    int lastPos = -1;  // Assume we havn't placed any cow yet, so last position = -1 
    int cows_ct = cows;  // Storing it in another variable, bc we don't want to chnage the count of original variable
    for (int i = 0; i < n; i++)
    {
        if (positions[i] - lastPos >= minDist || lastPos == -1)
        {
            cows_ct--;
            lastPos = positions[i];
        }
        if (cows_ct == 0) break;
    }
    return cows_ct == 0;
}

void binary()
{
    cin >> n >> cows;
    for (int i = 0; i < n; i++)
    {
        cin >> positions[i];
    }
    sort(positions, positions + n);

    // T T T T T T F F F F F
    // We have to find the position of last True
    int lo = 0, hi = 1e9, mid;
    while (hi - lo > 1)
    {
        int mid = (lo + hi) / 2;
        if (canPlaceCows(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    // Now we, will check first for hi, because we want the largest
    // minimum distance.
    if (canPlaceCows(hi))
    {
        cout << hi << "\n";
    }
    else
    {
        cout << lo << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;
    while (T--)
    {
        binary();
    }
    
    return 0;
}