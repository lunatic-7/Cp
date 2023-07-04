#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void olds()
{
    int old[3];
    int hero[3];
    int cold = 0;
    int chero = 0; 

    for (int i = 0; i < 3; i++)
    {
        cin >> old[i];
        if (old[i] == 1)
        {
            cold++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> hero[i];
        if (hero[i] == 1)
        {
            chero++;
        }
    }
    
    if (cold == chero)
    {
        cout << "Pass" << "\n";
    }
    else
    {
        cout << "Fail" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        olds();
    }
    
    return 0;
}