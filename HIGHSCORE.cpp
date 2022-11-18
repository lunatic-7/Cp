#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void guar()
{
    int n;
    cin >> n;
    int temp;
    int maxi = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> temp;
        maxi = max(maxi, temp);
    }

    cout << maxi << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        guar();
    }
    
    return 0;
}