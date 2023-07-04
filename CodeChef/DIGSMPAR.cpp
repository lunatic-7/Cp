#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll digitSum(ll n)
{
    ll sum = 0;
    ll temp = n;
    while (temp > 0)
    {
        sum += temp % 10;
        temp = temp / 10;
    }
    
    return sum;
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        int digi = digitSum(n);
        
        if (digi % 2 == 0)
        {
            while (digi % 2 == 0)
            {
                n++;
                digi = digitSum(n);
            }
        }
        else
        {
            while (digi % 2 != 0)
            {
                n++;
                digi = digitSum(n);
            }
        }

        cout << n << "\n";
    }
     
    return 0;
}