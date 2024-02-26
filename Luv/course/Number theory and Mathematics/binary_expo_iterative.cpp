#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll binExpIter(int a, int b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)  // Check for set bit
        {
            ans = (ans * a) % M;
        }
        a = (a * a) % M;
        b >>= 1;  // Right shifting b
    }
    // So what is happening here...
    /*
        Suppose we have a = 3 and b = 13
        What we have to do is to write 13 in powers of 2 and consider 
        only those which have set bits.

        3^13 ---> 3^1101   // 13 in binary 1101

        initially --> 13      3       1
                      b       a       ans
                      1101    3       3
                      110     3^2     3
                      11      3^4     3^5
                      1       3^8     3^13
        TC = lob(b)
    */

    return ans;
}

int main()
{
    wasif();
    int a = 2, b = 13;
    cout << binExpIter(a, b) << "\n";; 
    return 0;
}