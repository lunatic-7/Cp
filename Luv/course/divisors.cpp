#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Brute Force Approach to find divisors, divisors count and divisors sum
// Time Complexity O(n)
void bruteDivisor(int n)
{
    int cnt = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "\n";
            cnt++;
            sum += i;
        }
    }
    cout << "Count " << cnt << " Sum " << sum << "\n";
}

/*
    But we can observe a pattern in divisors:
    for n = 24
    1  ---> 24 / 1  == 24
    2  ---> 24 / 2  == 12
    3  ---> 24 / 3  == 8
    4  ---> 24 / 4  == 6
    // We can see we can get those lower part of divisors from the upper once as well
    // So, we just need to iterate our loop till sqrt(n)
    6  
    8
    12
    24
*/

// OPTIMIZED APPROACH

// Square root method to find divisors, divisors count and divisors sum
// It is faster than brute force as we have to iterate our loop till sqrt(n) only
// Time complexity O(sqrt(n))
void sqrtDivisor(int n)
{
    int cnt = 0, sum = 0;
    for (int i = 1; i * i <= n; i++)  // (i * i <= n) is same as (i <= sqrt(n)) 
    {
        if (n % i == 0) 
        {
            cout << i << " " << n / i << "\n";
            cnt++;
            sum += i;

            // Check in case if we don't consider a number twice
            // eg in case of n = 36
            // 1  36
            // 2  18
            // 3  12
            // 4  9
            // 6  6  // We don't want to consider this 6 twice
            if (n / i != i)
            {
                cnt++;
                sum += n / i;
            }
        }
    }
    cout << "Count " << cnt << " Sum " << sum << "\n";
}

int main()
{
    wasif();
    int n;
    cin >> n;
    
    cout << "Brute Force" << "\n";
    bruteDivisor(n);

    cout << "\n";
    cout << "Square root: Faster" << "\n";
    sqrtDivisor(n);
    return 0;
}