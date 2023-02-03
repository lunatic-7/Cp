#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Question: Unlock the door (Hackerearth)

// Our Friend Monk has finally found the Temple of Programming secrets. However, the door of the temple is firmly locked.
// Now, as per the rules of the temple, Monk needs to enter a Secret Password in a special language to unlock the door.
// This language, unlike English consists of K alphabets. The properties of this secret password are:

// It has a length of N characters.

// It is composed only of the K characters belonging to the Special language.

// Each character belonging to the special language has been used at max once in the secret code.

// Now, Monk has no idea about what the ideal password may be and needs you help.
// You need to help Monk find the total number of distinct candidate Strings for it Modulo 1e9 + 7.
// Constraints: 
// 1 <= T <= 10
// 1 <= N <= K <= 10^5

// Hint:
// We have to choose n charaters from k: So, no of ways kCn
// Now, we can arrage these n characters as well, So, no of arrangements n!
// So, ans = kCn * n!
const int M = 1e9+7;
// For Precomputing permutations
const int N = 1e5+10;
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
    int T;
    cin >> T;
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }
    
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        // n!
        int ans = fact[n];
        // n! * k!
        ans = (ans * 1LL * fact[k]) % M;
        // (k - n)! * n!
        int den = (fact[k - n] * 1LL * fact[n]) % M;
        // n! * (k! / (k - n)! * n!)
        ans = (ans * 1LL * binexp(den, M - 2)) % M;
        cout << ans << "\n";
    }
    
    return 0;
}