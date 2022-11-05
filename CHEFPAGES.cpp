#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    
    int A, B;
    cin >> A >> B;

    if (!A)
    {
        cout << "https://www.codechef.com/practice" << "\n";
    }
    else if (A && !B)
    {
        cout << "https://www.codechef.com/contests" << "\n";
    }
    else
    {
        cout << "https://discuss.codechef.com" << "\n";
    }
    
    return 0;
}