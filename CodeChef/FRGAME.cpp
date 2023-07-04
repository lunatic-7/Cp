#include <bits/stdc++.h>

using namespace std;
#define ll long long

void coin()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if (A < B)
    {
        A += C;
        if (A < B)
        {
            A += D;
        }
        else
        {
            B += D;
        }
    }
    else if (B <= A)
    {
        B += C;
        if (B <= A)
        {
            B += D;
        }
        else
        {
            A += D;
        }
    }

    if (A >= B)
    {
        cout << "N" << "\n";
    }
    else
    {
        cout << "S" << "\n";
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
        coin();
    }

    return 0;
}