#include <bits/stdc++.h>

using namespace std;
#define ll long long

void sumP()
{
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int count = N;
    for (int i = 0; i < N - 1; i++)
    {
        int s = arr[i];
        int p = arr[i];
        for (int j = i + 1; j < N; j++)
        {
            
            s = s + arr[j];
            p = p * arr[j];
            
            if (s == p)
            {
                count++;
            }
        }
        
    }
    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        sumP();
    }
    
    return 0;
}