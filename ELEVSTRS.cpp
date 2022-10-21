#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void elvs()
{
    double N, S, E;
    cin >> N >> S >> E;

    if ((sqrt(2) * N)/S < (2 * N)/E)
    {
        cout << "Stairs" << "\n";
    }
    else
    {
        cout << "Elevator" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        elvs();
    }
    
    return 0;
}