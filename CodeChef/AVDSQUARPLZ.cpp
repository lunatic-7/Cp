#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void psq()
{
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        psq();
    }
    
    return 0;
}