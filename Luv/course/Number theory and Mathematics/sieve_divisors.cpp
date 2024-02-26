#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e5+10;

// initializing a vector of arrays to store divisors
vector<int> divisors[N];

// Sieve Algorithm

int main()
{
    wasif();
    
    // Storing all the divisors till 1e5+10 in vector of arrays
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            divisors[j].PB(i);
        }
    }

    // printing the divisors of 1 to 10
    for (int i = 0; i < 10; i++)
    {
        for (int div : divisors[i])
        {
            cout << div << " ";
        }
        cout << "\n";
    }

    return 0;
}