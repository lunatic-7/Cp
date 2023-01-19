#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to print decimal no in binary
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << "\n";
}

int main()
{
    wasif();

    // Print odd or even till 0 to 7
    for (int i = 0; i < 8; i++)
    {
        printBinary(i);
        // Check even, odd using bits, and this is faster than n % 2 == 0 wala approach
        if (i & 1)
        {
            cout << i << " == odd" << "\n";
        }
        else
        {
            cout << i << " == even" << "\n";
        }
    }
    
    return 0;
}