#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void game()
{
    ll n;
    cin >> n;
    ll arr[n];
    int temp = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] == 1)
        {
            temp = 1;
        }
    }
    
    if (temp)
    {
        cout << "CHEF" << "\n";
    }
    else if (sum % 2 != 0)
    {
        cout << "CHEF" << "\n";
    }
    else
    {
        cout << "CHEFINA" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        game();
    }
    
    return 0;
}