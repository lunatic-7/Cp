#include <bits/stdc++.h>

using namespace std;
#define ll long long

void pali()
{
    int N;
    cin >> N;
    string bin;

    cin >> bin;

    int count_0 = 0;
    int count_1 = 0;

    for (int i = 0; i < N; i++)
    {
        if (bin[i] == '0')
        {
            count_0++;
        }
        else
        {
            count_1++;
        }
    }

    if (count_0 % 2 != 0 && count_1 % 2 != 0)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        pali();
    }
     
    return 0;
}