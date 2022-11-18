#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mushkil()
{
    int p;
    cin >> p;
    int temp = (p % 100) + (p / 100);

    if (temp >= 0 && temp <=10)
    {
        cout << temp << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mushkil();
    }
    
    return 0;
}