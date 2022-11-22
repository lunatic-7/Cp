#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int l, b;
    cin >> l >> b;

    int area = l * b;
    int peri = 2 * (l + b);

    if (area == peri)
    {
        cout << "Eq" << "\n";
        cout << area << "\n";
    }
    else if (area > peri)
    {
        cout << "Area" << "\n";
        cout << area << "\n";
    }
    else
    {
        cout << "Peri" << "\n";
        cout << peri << "\n";
    }
     
    return 0;
}