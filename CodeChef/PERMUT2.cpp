#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();

    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }
        
        int arr[n];
        int temp[n] = {0};
        int amb = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            temp[arr[i] - 1] = i + 1;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != temp[i])
            {
                amb = 0;
                break;
            }
        }

        if (amb)
        {
            cout << "ambiguous" << "\n";
        }
        else
        {
            cout << "not ambiguous" << "\n";
        }
    }
    
    return 0;
}