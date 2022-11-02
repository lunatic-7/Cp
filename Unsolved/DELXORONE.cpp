// NOT SOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void xox()
{
    int N;
    cin >> N;
    int arr[N];
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] ^ arr[j] > 1)
            {
                count++;
                break;
            }
        }
    }
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        xox();
    }
    
    return 0;
}