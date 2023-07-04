#include <bits/stdc++.h>

using namespace std;
#define ll long long

void ground()
{
    float A, B, X, Y;
    cin >> A >> B >> X >> Y;

    if ((A/X) < (B/Y))
    {
        cout << "Chef" << "\n";
    }
    else if ((B/Y) < (A/X))
    {
        cout << "Chefina" << "\n";
    }
    else
    {
        cout << "Both" << "\n";
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
        ground();
    }
    
    return 0;
}