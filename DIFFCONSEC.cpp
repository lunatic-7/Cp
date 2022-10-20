#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void consP()
{
    int N;
    cin >> N;
    string bin;

    cin >> bin;
    int count = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if (bin[i] == bin[i + 1])
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
        consP();
    }
    
    return 0;
}