#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

double eps = 1e-7;  // precision of our ans

void sq_binary(double x)
{
    double lo = 1, hi = x, mid;
    while (hi - lo > eps)  // eg: here, eps = 0.0000001, so, it will determine the accuracy 
    {
        mid = (hi + lo) / 2;
        if (mid * mid < x)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    // Now we can print lo or hi any, they both will give same ans
    // till the precision of 6
    cout << lo << " " << hi << "\n"; 
}

int main()
{
    wasif();

    // no for which we have to find the root of 
    double x;
    cin >> x;
    sq_binary(x);
    return 0;
}