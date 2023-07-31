#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 1e5+10;

// Fibonacci Series: 0 1 1 2 3 5 8
// Here, fib(n) gives nth fibonacci number
// Normal Recursive Fibonacci number Time Complexity is O(2^n)
// So, we can compute till n = 20 in normal fibonacci series recursive function
// But with Dynamic Programming using memoisation technique, we will reduce it to O(n).
// In this technique we try to remember what we have computed by far and use it for further computation, instead calculating the whole thing again.
// Eg: Lets suppose we are computing fib(5), in its recursion tree we can see we are computing fib(3) twice, but we will only compute it once and store it to use it further directly.
// But with dp we can compute n upto 10^6
// Top Down Approach: Bade problems ko chote mai todke use solve krna, usually with recursion
// Bottom Up Approach: Chote problems ko compute krte hue usse bdi problem solve krna

int dp[N];

// Top Down Approach
int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];

    // memoise
    return dp[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
    wasif();
    memset(dp, -1, sizeof(dp));  // memset function to store array with some default value here with -1
    int n;
    cin >> n;

    cout << fib(n) << "\n";    
    return 0;
}