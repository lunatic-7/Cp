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
    printBinary(59);  // 00000111011

    // Clear lsb till given bit 
    // eg: clear lsb till 4th bit for 59
    // so, 00000111011 --> 00000100000

    /*
        Approach:
        We will be required a binary 11111100000
        We can get that from 00000011111
        We can get that from 00000100000 - 1  ==> (1 << 5) - 1
    */

    int a = 59;
    int i = 4;  // Till which bit we want to clear lsb
    int b = (a &  (~((1 << (i + 1)) - 1)));
    printBinary(b);

    // Clear msb till given bit 
    // eg: clear msb till 3rd bit for 59
    // so, 00000111011 --> 00000001011

    /*
        Approach:
        We will be required a binary 00000001111
        We can get that from 00000010000 - 1  ==> (1 << 4) - 1
    */

    i = 3;  // Till which bit we want to clear msb
    int c = (a & (1 << (i + 1)) - 1);
    printBinary(c);
    return 0;
}