#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // A bitset is an array whose each value is either 0 or 1
    bitset<10> s;

    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;

    cout << s[4] << "\n";
    cout << s[5] << "\n";

    // Another way to create a bitset
    bitset<7> k(string("0110010")); // from right to left

    cout << k[4] << "\n";
    cout << k[6] << "\n";

    // The function count returns the no of ones 1 in a bitset
    cout << k.count() << "\n";

    // Some bit operations
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));

    cout << (a & b) << "\n"; // AND
    cout << (a | b) << "\n"; // OR
    cout << (a ^ b) << "\n"; // XOR
    return 0;
}