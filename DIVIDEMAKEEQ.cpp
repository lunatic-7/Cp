#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void same()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int mini = arr[0];
    int maxi = arr[n - 1];

    if (mini == maxi)
    {
        cout << count << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] == mini))
            {
                continue;
            }
            else if ((arr[i] % mini == 0))
            {
                count++;
            }
            else
            {   
                count = n;
                break;     
            }          
        }
        
        cout << count << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        same();
    }
    
    return 0;
}