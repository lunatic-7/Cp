#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Suppose we have q = 10^7 queries and n = 10^7 numbers to check prime in each queries.
// So, if we use Square root method (which was quite fast), still we will have a Time
// Complexity of O(q) * O(sqrt(n)). This will give TLE.
// So, to solve this problem we pre compute all the prime numbers using Sieve Algorithm.

const int N = 1e7+10;
// initializing a vector with N size, initially with all true values
vector<bool> isPrime(N, 1);

// Sieve Algorithm
/*
    Suppose we have n = 30
    Write down numbers till 30:
    1   2   3   4   5   6   7   8   9   10
    11  12  13  14  15  16  17  18  19  20
    21  22  23  24  25  26  27  28  29  30

    0. Initially we consider all the numbers till n as prime numbers, and at the end:
       Crossed = Non Prime
       Uncrossed = Prime

    1. 1 is non prime (we all know) so, simply cross it and move to next number.  // Crossed = 1
    2. The next number is 2, now excluding 2 cross all the multiples of 2 till 30.  // Crossed = 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30
    3. Now move to next uncrossed number which is 3, do same with 3, cross all its multiples (ignore already crossed).  //  Crossed = 6, 9, 12, 15, 18, 21, 24, 27, 30
    4. Same process again, we get 5 uncrossed. // Crossed = 10, 15, 10, 25, 30
    5. Follow this process until we consider all the uncrossed numbers.
    6. Finally, we are left with: // Uncrossed = 2, 3, 5, 7, 11, 13, 17, 19, 23, 29  (These are Prime numbers till 30) 
    
    // Note: Whenever we move to next uncrossed number, that number is always gonna be a prime number.
*/

int main()
{
    wasif();
    // Sieve Algorithm, Time complexity O(N * log(log(N)))
    // Setting 0 and 1 as non prime (as we all know that)
    isPrime[0] = isPrime[1] = false;
    // Pre computing all the primes till N.
    for (int i = 2; i < N; i++)
    {
        // If i is prime
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                // Changing all multiples of i to false
                isPrime[j] = false;
            }
        }
    }
    
    // Queries
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        if (isPrime[n])
        {
            cout << "Prime" << "\n";
        }
        else
        {
            cout << "Non Prime" << "\n";
        }
    }

    // Time complexity = O(q) * O(1)
    
    return 0;
}