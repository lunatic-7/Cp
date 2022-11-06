#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void race()
{
    int X, Y, A, B;
    cin >> X >> Y >> A >> B;
    int medals = 1;

    if (X != A && X != B && Y != A && Y != B)
    {
        medals = 2;
    }
    else if ((X == A || X == B) && (Y == A || Y == B))
    {
        medals = 0;
    }

    cout << medals << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        race();
    }
    
    return 0;
}