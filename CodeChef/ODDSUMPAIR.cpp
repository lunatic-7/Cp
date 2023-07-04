#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void oddPair()
{
    int temp;
    int oddCount = 0;
    int evenCount = 0;
    
    for (int i = 0; i < 3; i++)
    {
        cin >> temp;
        if (temp % 2 == 0)
        {
            evenCount++;
        }
        else if (temp % 2 != 0)
        {
            oddCount++;
        }
    }

    if (oddCount >= 1 && evenCount >= 1)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        oddPair();
    }
    
    return 0;
}