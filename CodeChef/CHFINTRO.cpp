#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int N, r;
    cin >> N >> r;
    int temp;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        
        if (temp >= r)
        {
            cout << "Good boi" << "\n";
        }
        else
        {
            cout << "Bad boi" << "\n";
        }
    }
    
    return 0;
}