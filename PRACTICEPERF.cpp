#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int temp;
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> temp;
        if (temp >= 10)
        {
            count++;
        }
    }

    cout << count << "\n";
    
    return 0;
}