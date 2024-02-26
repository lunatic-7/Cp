#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n = 5;

    cout << (n >> 1) << "\n";  // Divide by 2 
    cout << (n << 1) << "\n";  // Multiply by 2 

    // How is it working!
    
    // 5 == 101
    // 101 --> (2^2 * 1 + 2^1 * 0 + 2^0 * 1) / 2  (On right shift)
    // ==> 10 --> (2^1 * 1 + 2^0 * 0)
    // 10 == 2

    // 5 == 101
    // 101 --> (2^2 * 1 + 2^1 * 0 + 2^0 * 1) * 2  (On left shift)
    // ==> 1010 --> (2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0)
    // 1010 == 10

    return 0;
}