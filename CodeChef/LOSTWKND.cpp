#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void work()
{
    int arr[5];
    int P;
    int tot = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cin >> P;

    for (int i = 0; i < 5; i++)
    {
        tot += arr[i] * P;
    }
    
    if (tot > 120)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        work();
    }
    
    return 0;
}