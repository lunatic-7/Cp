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

// funtion to multiply our no till nth root
double multiply(double mid, int n)
{
    double ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= mid;
    }
    return ans;
}

void nth_binary(double x, int n)
{
    double lo = 1, hi = x, mid;
    while (hi - lo > eps)  // eg: here, eps = 0.0000001, so, it will determine the accuracy 
    {
        mid = (hi + lo) / 2;
        if (multiply(mid, n) < x)
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
    cout << pow(x, 1.0/n) << "\n";  // finding nth root using inbuit pow function
}

int main()
{
    wasif();

    // no for which we have to find the root of 
    double x;
    // value of n in nth root
    int n;
    cin >> x >> n;
    nth_binary(x, n);
    return 0;
}