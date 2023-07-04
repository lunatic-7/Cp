#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void grade()
{
    int am, bm, cm, tm, a, b, c;
    cin >> am >> bm >> cm >> tm >> a >> b >> c;

    if (a >= am && b >= bm && c >= cm && (a + b + c >= tm))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }  
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        grade();
    }
    
    return 0;
}