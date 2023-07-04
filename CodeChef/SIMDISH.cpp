#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dish()
{
    string dis1[4], dis2[4];
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> dis1[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cin >> dis2[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (dis1[i] == dis2[j])
            {
                count++;
            }
        }
    }

    if (count >= 2)
    {
        cout << "similar" << "\n";
    }
    else
    {
        cout << "dissimilar" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dish();
    }
    
    return 0;
}