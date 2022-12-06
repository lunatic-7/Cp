#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dekhte()
{
    int n;
    cin >> n;
    int count = 0;

    int i = 1;
    while (n > 0)
    {
        while (pow(i, 2) <= n)
        {
            i++;
        }
        n -= pow(i - 1, 2);
        count++;
        i = 1;
    }
    
    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dekhte();
    }
    
    return 0;
}