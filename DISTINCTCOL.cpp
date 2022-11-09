#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void color()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Finding color with max balls
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
    }
    
    cout << maxi << "\n";
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        color();
    }
    
    return 0;
}