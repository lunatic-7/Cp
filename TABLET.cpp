#include <bits/stdc++.h>

using namespace std;
#define ll long long

void buy()
{
    int N, B;
    cin >> N >> B;
    int W, H, P;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> W >> H >> P;

        if (P <= B)
        {
            arr[i] = W * H;
        }
        else
        {
            arr[i] = 0;
        }
    }

    int mx = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }
    
    if (mx > 0)
    {
        cout << mx << "\n"; 
    }
    else
    {
        cout << "no tablet" << "\n";
    }
    
    

}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        buy();
    }

    return 0;
}