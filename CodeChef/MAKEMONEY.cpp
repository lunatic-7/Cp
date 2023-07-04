#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ahubik()
{
    int n, x, c;
    cin >> n >> x >> c;
    int arr[n];
    int paisa = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (x - arr[i] > c)
        {
            arr[i] = x;
            paisa += c;
        }
        sum += arr[i];
    }
    
    cout << sum - paisa << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ahubik();
    }
    
    return 0;
}