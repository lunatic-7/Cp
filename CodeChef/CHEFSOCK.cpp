#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    ll jacketCost, sockCost, money;
    cin >> jacketCost >> sockCost >> money;
    int sock;

    sock = (money - jacketCost) / sockCost;
    if (sock % 2 != 0)
    {
        cout << "Unlucky Chef" << "\n";
    }
    else
    {
        cout << "Lucky Chef" << "\n";
    }
    
    return 0;
}