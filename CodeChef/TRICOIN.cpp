#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gold()
{
    int N;
    cin >> N;
    int height = 0;

    while (N >= (height + 1))
    {
        N = N - (height + 1);
        height++;
    }

    cout << height << "\n"; 
}

int main()
{
    // wasif();
    int T;
    cin >> T;

    while (T--)
    {
        gold();
    }
    
    return 0;
}