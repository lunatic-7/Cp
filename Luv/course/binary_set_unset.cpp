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
    // Printing Binary of 9 in 11 digits
    int a = 9; 
    printBinary(a);  // 00000001001  

    // check if ith bit is set or unset
    int i = 3;
    if ((a & (1 << i)) != 0)
    {
        cout << "Set bit" << "\n";
    }
    else
    {
        cout << "Unset bit" << "\n";
    }

    // inverting a binary number eg: 00000001001 --> 11111110110
    printBinary(~a);  // ~ (this symbol is called tilda) It inverts the binary number.
    
    // setting a bit
    printBinary(a | (1 << 1));  // setting 1st bit
    // 00000001001 | 10 ---> 00000001011

    // unsetting a bit
    printBinary(a & (~(1 << 3)));  // unsetting 3rd bit 
    // 00000001001 & 0111 ---> 00000000001
    
    // toggling a bit 1 --> 0 or 0 --> 1
    printBinary(a ^ (1 << 2));  // toggling 2nd bit
    // 00000001001 ^ 100 ---> 00000001101
    printBinary(a ^ (1 << 3));  // toggling 3rd bit
    // 00000001001 ^ 1000 ---> 00000000001

    // Finding bit count (count of set bits)
    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((a & (1 << i)) != 0)
        {
            ct++;
        }
    }
    cout << ct << "\n";  // 2 (as two 1's in 1001)

    // inbuilt function for bit count
    cout << __builtin_popcount(a) << "\n";  // 2
    // inbuilt function for bit count of long long integer
    cout << __builtin_popcountll((1LL << 35) - 1) << "\n"; // 35

    return 0;
}