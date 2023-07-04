#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void qual()
{
    int x, a, b;
    cin >> x >> a >> b;

    if ((a * 1) + (b * 2) >= x)
    {
        cout << "Qualify" << "\n";
    }
    else
    {
        cout << "NotQualify" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        qual();
    }
    
    return 0;
}