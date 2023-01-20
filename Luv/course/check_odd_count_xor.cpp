/*
Given array a of n integers. All integers are present
in even count excpt one.
Find that one integer which has odd count in O(N) 
time complexity and (1) space complexity.
N < 10^5
a[i] < 10^5

Input:
9
2 3 3 3 7 7 2 8 8

Output:
3
*/

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
    // Approach --> We will use XOR property of the xor of
    // two same numbers is 0 and xor of a number with 0 is the same
    // number.
    // All the even count will be converted in 0 in the end
    // and one odd count will remain.
    // eg: a ^ a ^ b ^ c ^ b ^ a ^ c
    // We can re arrange that in:
    // a ^ a ^ a ^ b ^ b ^ c ^ c
    // ==> 0 ^ a  ==> a

    int n;
    cin >> n;
    int x;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans ^= x;
    }
    
    cout << ans << "\n";
    
    return 0;
}