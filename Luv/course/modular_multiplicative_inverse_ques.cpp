#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Question
/*
    There are N students and K toffees. K < N.
    Count the number of ways to distribute toffee 
    among N students, such that each students get 1
    toffee only.
    Constraints:
    M = 10^9 + 7
    K < N < 10^6
    Q < 10^5

    Hint: We have to calculate nCk = n! / ((n - k)! * k!)

*/

const int M = 1e9+7;
// To precompute all the values of N, We are precomputing because,
// We have to calculate our solution for Q queries, and calculating
// factorial takes O(N) TC. So, we can't use O(N) complexity in each query.
const int N = 1e6+10;
int fact[N];

// Binary exponentiation function (Here, to calculate inverse)
int binexp(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            result = (result * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return result;
}

int main()
{
    wasif();
    fact[0] = 1;

    // Computing factorials
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }
    
    // Queries
    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin >> n >> k;
        // numerator
        int ans = fact[n];
        // denominator
        int den = (fact[n - k] * 1LL * fact[k]) % M;
        // inverse of denominator because,
        // (A / B) % M == ((A % M) * (B^-1 % M)) % M
        ans = ans * binexp(den, M - 2);
        cout << ans << "\n";
    }

    return 0;
}
