#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Brute Force Method to check prime.
// Time Complexity O(N)
bool primeChk(int n)
{
    bool isPrime = true;
    // If n is 1 return false as 1 is a non prime number
    if (n == 1)
    {
        return false;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// But we can observer a pattern here, just like in finding divisors, we could use
// n till sqrt(n), here we can do the same, bacause if a number if divisible by 
// a number coming before sqrt(n), it will automatically be divisible by numbers
// coming afterwards.
// eg: for n = 36
// 2  -->  36 / 2 == 18 (So, if a number is divisible by 2, it will automatically be divisible by 18)
// 3  -->  36 / 3 == 12
// 4  -->  36 / 4 == 9
// 6  -->  36 / 6 == 6
// NOTE = The smallest prime number of a composite number is always prime.
// Square Root Method to check prime
// Time Complexity sqrt(n)
bool sqrtPrimeChk(int n)
{
    bool isPrime = true;
    // If n is 1 return false as 1 is a non prime number
    if (n == 1)
    {
        return false;
    }
    
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    wasif();
    int n;
    cin >> n;

    cout << primeChk(n) << "\n";
    cout << sqrtPrimeChk(n) << "\n";
    return 0;
}