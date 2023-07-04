#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void frame()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int i = 0;
    int count = 0;
    while (i < n - 1)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            i++;
        }
        else
        {
            i++;
        }
    }
    
    cout << n - count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        frame();
    }
    
    return 0;
}