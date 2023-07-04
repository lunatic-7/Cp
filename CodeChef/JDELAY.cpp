#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void subm()
{
    int n;
    cin >> n;
    int s, j;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> j;
        if (j - s > 5)
        {
            count++;
        }
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        subm();
    }
    
    return 0;
}