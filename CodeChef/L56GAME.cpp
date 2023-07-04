#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int evpair()
{
    int N;
    cin >> N;
    int arr[N];
    int oddCount = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }
    
    if ((oddCount % 2 != 0) && (N > 1))
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cout << evpair() << "\n";
    }
    
    return 0;
}