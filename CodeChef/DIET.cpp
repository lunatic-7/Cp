#include <bits/stdc++.h>

using namespace std;
#define ll long long

void dietc()
{
    int N, K;
    cin >> N >> K;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int remain = 0;
    for (int i = 0; i < N; i++)
    {
        if ((A[i] + remain) >= K)
        {
            remain += A[i] - K;
        }
        else
        {
            remain += A[i] - K;
            cout << "NO " << i + 1 << "\n";
            break;
        }      
    }
    if (remain >= 0)
    {
        cout << "YES" << "\n";
    }
        
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        dietc();
    }
    
    return 0;
}