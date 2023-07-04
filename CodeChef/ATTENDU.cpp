#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void attend()
{
    int N;
    cin >> N;
    string attendance;

    cin >> attendance;

    double present = 0;
    for (int i = 0; i < attendance.length(); i++)
    {
        if (attendance[i] == '1')
        {
            present++;
        }
    }
    
    if ((((120 - N) + present) / 120) * 100 >= 75)
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
        attend();
    }
    
    return 0;
}