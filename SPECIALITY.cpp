#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void edi()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y)
    {
        if (x > z)
        {
            cout << "Setter" << "\n";
        }
        else
        {
            cout << "Editorialist" << "\n";
        }
    }
    else if (y > x)
    {
        if (y > z)
        {
            cout << "Tester" << "\n";
        }
        else
        {
            cout << "Editorialist" << "\n";
        }
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        edi();
    }
    
    return 0;
}