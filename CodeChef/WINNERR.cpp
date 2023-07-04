#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void penal()
{
    int pa, pb, qa, qb;
    cin >> pa >> pb >> qa >> qb;
    int maxp = max(pa, pb);
    int maxq = max(qa, qb);

    if (maxp < maxq)
    {
        cout << "P" << "\n";
    }
    else if (maxq < maxp)
    {
        cout << "Q" << "\n";
    }
    else
    {
        cout << "TIE" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        penal();
    }
    
    return 0;
}