#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void coder()
{
    int n;
    cin >> n;
    int temp;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp >= 1000)
        {
            count++;
        }        
    }

    cout << count << "\n";
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        coder();
    }
    
    return 0;
}