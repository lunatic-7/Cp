#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    string n;
    cin >> n;

    if (n.size() == 1)
    {
        cout << 1 << "\n";
    }
    else if (n.size() == 2)
    {
        cout << 2 << "\n";
    }
    else if (n.size() == 3)
    {
        cout << 3 << "\n";
    }
    else
    {
        cout << "More than 3 digits" << "\n";
    }

    return 0;
}