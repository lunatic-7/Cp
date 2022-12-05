#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void glove()
{
    ll n;
    cin >> n;
    ll hrr[n], grr[n];
    int front = 1;
    int back = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> hrr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> grr[i];
    }   

    for (int i = 0; i < n; i++)
    {
        if (grr[i] < hrr[i])
        {
            front = 0;
            break;
        }
    }

    reverse(grr, grr + n);
    
    for (int i = 0; i < n; i++)
    {
        if (grr[i] < hrr[i])
        {
            back = 0;
            break;
        }
    }

    if (front && back)
    {
        cout << "both" << "\n";
    }
    else if (front && !back)
    {
        cout << "front" << "\n";
    }
    else if (!front && back)
    {
        cout << "back" << "\n";
    }
    else
    {
        cout << "none" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        glove();
    }
    
    return 0;
}