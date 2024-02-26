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
    // Check if a number is power of 2
    // Approach
    // 1000 & 0111 == 0 (Power of 2) else (Not power of 2)
    
    int n = 16;

    if (n & (n - 1))
    {
        cout << "Not power of 2" << "\n";
    }
    else 
    {
        cout << "Power of 2" << "\n";
    }
    
    return 0;
}