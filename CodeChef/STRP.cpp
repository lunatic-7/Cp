#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void strip()
{
    int N;
    cin >> N;

    string s;
    cin >> s;
    
    int i = 0;
    int count = 0;
    while (i < N)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            i+=2;
        }
        else
        {
            count++;
            i++;
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
        strip();
    }
    
    return 0;
}