#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int N;
    cin >> N;

    if (N % 4 == 0)
    {
        cout << N + 1 << "\n";
    }
    else
    {
        cout << N - 1 << "\n"; 
    }
    
    return 0;
}