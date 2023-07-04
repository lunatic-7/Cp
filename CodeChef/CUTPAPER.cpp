#include <bits/stdc++.h>

using namespace std;
#define ll long long


void boxes()
{
    int N, K;
    cin >> N >> K;
    cout << pow(N/K, 2) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        boxes();
    }
    
    
    return 0;
}
