#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chela()
{
    int n;
    cin >> n;

    cout << round(pow((0.143 * n), n)) << "\n"; 
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chela();
    }
    
    return 0;
}