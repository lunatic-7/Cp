#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void todu()
{
    int n;
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        if (n >= 100)
        {
            count += n / 100;
            n = n % 100;
        }
        else if (n >= 50)
        {
            count += n / 50;
            n = n % 50;
        }
        else if (n >= 10)
        {
            count += n / 10;
            n = n % 10;
        }
        else if (n >= 5)
        {
            count += n / 5;
            n = n % 5;
        }
        else if (n >= 2)
        {
            count += n / 2;
            n = n % 2;
        }
        else if (n >= 1)
        {
            count += n / 1;
            n = n % 1;
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
        todu();
    }
    
    return 0;
}