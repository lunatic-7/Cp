#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void tv()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a - c < b - d)
    {
        cout << "First" << "\n";
    }
    else if (b - d < a - c)
    {
        cout << "Second" << "\n";
    }
    else
    {
        cout << "Any" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        tv();
    }
    
    return 0;
}