#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void trans()
{
    int r;
    cin >> r;
    double x[3];
    double y[3];
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    
    if (sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2)) <= r)
    {
        count++;
    }
    if (sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2)) <= r)
    {
        count++;
    }
    if (sqrt(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2)) <= r)
    {
        count++;
    }
    
    if (count == 2 || count == 3)
    {
        cout << "yes" << "\n";
    }
    else
    {
        cout << "no" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        trans();
    }
    
    return 0;
}