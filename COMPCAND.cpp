#include <iostream>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void candy()
{
    int n, k;
    cin >> n >> k;
    
    if (n % k == 0)
    {
        cout << n / k << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        candy();
    }
    
    return 0;
}