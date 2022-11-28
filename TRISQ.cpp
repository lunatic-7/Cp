#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void tri()
{
    int b;
    cin >> b;
    int answer = 0;

    while (b > 2)
    {
        answer += (b - 2) / 2;
        b = b - 2;
    }

    cout << answer << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        tri();
    }
    
    return 0;
}