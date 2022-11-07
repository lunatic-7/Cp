#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void game()
{
    int a, b;
    cin >> a >> b;

    if ((a + b) % 2 == 0)
    {
        cout << "Bob" << "\n";
    }
    else
    {
        cout << "Alice" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        game();
    }
    
    return 0;
}