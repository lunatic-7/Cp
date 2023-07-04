#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void hardwalk()
{
    int n;
    ll p;
    cin >> n >> p;
    int arr[n];
    int cake = 0; int hard = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= (p / 10))
        {
            hard++;
        }
        else if (arr[i] >= (p / 2))
        {
            cake++;
        }
    }

    if (hard == 2 && cake == 1)
    {
        cout << "yes" << "\n";
    }
    else
    {
        cout << "no" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        hardwalk();
    }
    
    return 0;
}