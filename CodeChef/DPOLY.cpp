#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void degr()
{
    int n;
    cin >> n;
    int arr[n];
    int ind;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            ind = i;
        }
    }
    
    cout << ind << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        degr();
    }
    
    return 0;
}