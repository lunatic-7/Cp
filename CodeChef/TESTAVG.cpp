#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void score()
{
    double a, b, c;
    cin >> a >> b >> c;

    if ((a + b)/2 < 35 || (b + c)/2 < 35 || (a + c)/2 < 35)
    {
        cout << "Fail" << "\n";
    }
    else
    {
        cout << "Pass" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        score();
    }
    
    return 0;
}