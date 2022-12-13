#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void maths()
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int n = arr[i] * arr[j];
            int temp = 0;
            while (n > 0)
            {
                temp += n % 10;
                n = n / 10;
            }
            maxi = max(maxi, temp);
        }
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
        maths();
    }
    
    return 0;
}