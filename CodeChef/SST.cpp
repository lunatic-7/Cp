#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void eval()
{
    int a, b;
    cin >> a >> b;

    int evala = (a * 100)/10;
    int evalb = (b * 100)/20;

    if (evala > evalb)
    {
        cout << "FIRST" << "\n";
    }
    else if (evalb > evala)
    {
        cout << "SECOND" << "\n";
    }
    else
    {
        cout << "ANY" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        eval();
    }
    
    return 0;
}