#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void wa()
{
    int n;
    cin >> n;
    int arr[n];
    string s;
    int mini = 101;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            mini = min(mini, arr[i]);
        }
    }
    
    cout << mini << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        wa();
    }
    
    return 0;
}