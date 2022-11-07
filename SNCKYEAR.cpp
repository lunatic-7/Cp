#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void hos()
{
    int N;
    cin >> N;

    if (N == 2010 || N == 2015 || N == 2016 || N == 2017 || N == 2019)
    {
        cout << "HOSTED" << "\n";
    }
    else
    {
        cout << "NOT HOSTED" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        hos();
    }
    
    return 0;
}