#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int temp = gcd(a, b); 

        cout << a / temp * b / temp << "\n";
    }
    
    return 0;
}