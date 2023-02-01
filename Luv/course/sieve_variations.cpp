#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e7+10;
// initializing a vector with N size, initially with all true values
vector<bool> isPrime(N, 1);
// vectors to store lowest prime of a number and highest prime of a number
vector<int> lp(N, 0), hp(N, 0);

// Sieve Algorithm

int main()
{
    wasif();
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            // To store hp and lp of prime numbers, (hp and lp of prime numbers, will be that prime number only)
            lp[i] = hp[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                // storing highest prime of each number,
                // this will keep on changing, eg at first we get: j = 6 and i = 2, hp[6] = 2
                // but later on when we get: j = 6 and i = 3, hp[6] = 3  (2 will be replaced with 3) 
                hp[j] = i;

                // store lowest prime of each number, In this we will store only once.
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }

    // Printing highest and lowest prime of all numbers till 1 to 30
    for (int i = 1; i < 30; i++)
    {
        cout << i << " - " <<  lp[i] << " " << hp[i] << "\n";
    }
    cout << "\n\n";

    // Computing prime factors of a number.
    // We can compute this from both hp and lp (Time Complexity: O(log(n)))
    int num;
    cin >> num;
    vector<int> prime_factors;

    while (num > 1)
    {
        // Extracting hp of our num
        int prime_factor = hp[num];

        // dividing num with prime_factor, until it is no more divisible with that prime factor
        while (num % prime_factor == 0)
        {
            prime_factors.PB(prime_factor);
            num /= prime_factor;
        }
    }

    // Printing prime factors
    for (int factor : prime_factors)
    {
        cout << factor << " ";
    }

    return 0;
}