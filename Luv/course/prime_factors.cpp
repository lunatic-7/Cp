#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n;
    cin >> n;

    // Approach: First we have to find the smallest prime number of a given n,
    // and then we keep on dividing that n with that prime number, until it 
    // is no more divisible, now we have to find this new n's prime number,
    // and follow the same process until n becomes 1
    // Brute Force Approach 
    // Time Complexity O(n)
    vector<int> prime_fact_b;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_fact_b.PB(i);
            n /= i;
        }
    }

    for (int val : prime_fact_b)
    {
        cout << val << " ";
    }
    cout << "\n";

    // As in prime factorization, we always consider the smallest possible prime number
    // which is divisor of n, so, we can use n till sqrt(n), bacause if a number is divisible by 
    // a number coming before sqrt(n), it will automatically be divisible by numbers coming afterwards.
    // This will work fine until we have n composite, but asa we get n a prime no, we have to apply,
    // an if check, bc if n = 3, then sqrt(3) condition will not work.
    // Square Root Method for prime factorization
    // Time complexity O(sqrt(n))
    int m;
    cin >> m;
    vector<int> prime_fact_s;
    for (int i = 2; i * i <= m; i++)
    {
        while (m % i == 0)
        {
            prime_fact_s.PB(i);
            m /= i;
        }
    }
    if (m > 1)
    {
        prime_fact_s.PB(m);
    }
    
    cout << "Brute Force Approach" << "\n";
    for (int val : prime_fact_b)
    {
        cout << val << " ";
    }
    cout << "\n\n";

    cout << "Square Root Approach" << "\n";
    for (int val : prime_fact_s)
    {
        cout << val << " ";
    }
    cout << "\n";
    
    return 0;
}