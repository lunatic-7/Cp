#include <bits/stdc++.h>

using namespace std;
#define ll long long

void evenW()
{
    int N;
    cin >> N;
    map<char, int> m;
    int chk = 1;
    
    string S;
    cin >> S;

    for (int i = 0; i < N; i++)
    {
        m[S[i]]++;
    }

    for (auto x : m)
    {
        if (x.second % 2 != 0)
        {
            chk = 0;
            break;
        }
    }
    
    if (chk == 0)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
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
        evenW();
    }

    return 0;
}