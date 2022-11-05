#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int N;
    cin >> N;
    int weapon;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> weapon;
        if (weapon % 2 == 0)
        {
            count++;
        }
    }

    if (count > (N - count))
    {
        cout << "READY FOR BATTLE" << "\n";
    }
    else
    {
        cout << "NOT READY" << "\n";
    }
    
    return 0;
}