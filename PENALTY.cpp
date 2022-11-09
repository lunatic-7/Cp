#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void soccer()
{
    int arr[11];
    int count1 = 0;
    int count2 = 0;

    for (int i = 1; i <= 10; i++)
    {
        cin >> arr[i];
        if (i % 2 != 0 && arr[i] == 1)
        {
            count1++;
        }
        else if (i % 2 == 0 && arr[i] == 1)
        {
            count2++;
        }
    }

    if (count1 > count2)
    {
        cout << 1 << "\n";
    }
    else if (count1 < count2)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        soccer();
    }
    
    return 0;
}