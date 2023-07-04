#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int deck() 
{
    int K;
    cin >> K;

    return 52 % K;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cout << deck() << "\n";
    }
    
    return 0;
}