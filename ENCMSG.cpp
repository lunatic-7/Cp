#include <bits/stdc++.h>

using namespace std;
#define ll long long

void encoding()
{
    int N;
    cin >> N;
    string S;
    char temp;

    cin >> S;

    for (int i = 0; i < N - 1; i += 2)
    {
        temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        S[i] = 'z' - S[i] + 'a';
    }
    
    cout << S << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        encoding();
    }
    
    return 0;
}