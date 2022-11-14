#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pass()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= 10 && b >= 10 && c >= 10 && (a + b + c) >= 100)
    {
        cout << "PASS" << "\n";
    }
    else
    {
        cout << "FAIL" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        pass();
    }
    
    return 0;
}