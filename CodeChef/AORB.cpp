#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void prob()
{
    int a, b;
    cin >> a >> b;
    int c1 = (500 - (a * 2)) + (1000 - ((a + b) * 4));
    int c2 = (1000 - (b * 4)) + (500 - ((a + b) * 2));

    int maxi = max(c1, c2);
    cout << maxi << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        prob();
    }
    
    return 0;
}