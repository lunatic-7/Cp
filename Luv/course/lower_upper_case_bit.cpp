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

    /* Observe the pattern here in lower and upper case 
    characters, all bits are same except 5th bit.
    5th bit of Uppercase is Unset (0)
    and
    5th bit of lowercase is Set (1)
    eg : (A == 1000001) and (a == 1100001)
    */
   
    for (char c = 'A'; c <= 'E'; c++)
    {
        cout << c << " "; 
        printBinary(c);
    }
    cout << "\n";
    for (char c = 'a'; c <= 'e'; c++)
    {
        cout << c << " "; 
        printBinary(c);
    }
    cout << "\n";

    // Here, we can observe the pattern
    // A 00001000001
    // B 00001000010
    // C 00001000011
    // D 00001000100
    // E 00001000101

    // a 00001100001
    // b 00001100010
    // c 00001100011
    // d 00001100100
    // e 00001100101

    // So, to convert Upper to lower case we have to set its 5th bit
    // and to convert lower to Upper case we have to unset its 5th bit.

    // Upper to lower
    char a = 'A' | (1 << 5);
    cout << a << "\n";
    // Using Trick
    cout << char('B' | ' ') << "\n";  // ' '  its binary is 100000 (1 << 5)

    // lower to Upper
    char A = ('a' & (~(1 << 5)));
    cout << A << "\n";
    // Using Trick
    cout << char('b' & '_') << "\n";  // '_'  its binary is 1011111


    return 0;
}