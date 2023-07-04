#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void contest()
{
    int n;
    cin >> n;
    string c;
    int counts = 0;
    int countl = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == "START38")
        {
            counts++;
        }
        else if (c == "LTIME108")
        {
            countl++;
        }
    }

    cout << counts << " " << countl << "\n";
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        contest();
    }
    
    return 0;
}