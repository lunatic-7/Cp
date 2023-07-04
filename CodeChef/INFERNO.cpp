#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void coc()
{
    int n;
    double x;
    cin >> n >> x;
    double arr[n];
    int hp = 0, maxi = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hp += ceil(arr[i] / x);
        maxi = max(maxi, (int) arr[i]);
    }

    if (maxi <= hp)
    {
        cout << maxi << "\n";
    }
    else
    {
        cout << hp << "\n";
    }    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        coc();
    }
    
    return 0;
}