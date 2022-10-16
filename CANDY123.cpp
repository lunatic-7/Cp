#include <bits/stdc++.h>

using namespace std;
#define ll long long

void candy()
{
    int A, B;
    cin >> A >> B;
    int candy = 1;

    while (A >= 0 && B >= 0)
    {
        if (candy % 2 != 0)
        {
            A -= candy;
            candy++;
        }
        else
        {
            B -= candy;
            candy++;
        }
    }

    if (A < 0)
    {
        cout << "Bob" << "\n";
    }
    else if (B < 0)
    {
        cout << "Limak" << "\n";
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
        candy();
    }
    
    return 0;
}