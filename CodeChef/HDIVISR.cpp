#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n;
    cin >> n;

    for (int i = 10; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << "\n";
            break;
        }
    }
    
    return 0;
}