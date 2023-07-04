#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gift()
{
    int n;
    cin >> n;
    int free = n / 5;

    cout << n - free << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        gift();
    }
    
    return 0;
}