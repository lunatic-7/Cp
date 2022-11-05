#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void shaolin()
{
    int N;
    cin >> N;
    int woman;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> woman;
        if (woman >= 10 && woman <= 60)
        {
            count++;
        }
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        shaolin();
    }
    
    return 0;
}