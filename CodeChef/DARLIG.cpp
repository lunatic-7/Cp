#include <bits/stdc++.h>

using namespace std;
#define ll long long

void darkLight()
{
    int N, K;
    cin >> N >> K;
    if (K == 0)
    {
        if (N % 4 == 0)
        {
            cout << "Off" << "\n";
        }
        else
        {
            cout << "On" << "\n";
        }
        
    }
    else if (K == 1 && (N %  4 == 0))
    {
        cout << "On" << "\n";
    }
    else
    {
        cout << "Ambiguous" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        darkLight();
    }
    
    return 0;
}