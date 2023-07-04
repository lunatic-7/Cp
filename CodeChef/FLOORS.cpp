#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void travel()
{
    double x, y;
    cin >> x >> y;
    int chef = ceil(x / 10);
    int chefina = ceil(y / 10);

    cout << abs(chefina - chef) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        travel();
    }
    
    return 0;
}