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
    int a = 2, b = 3;

    a = a ^ b;
    b = b ^ a;  // Here a is (a ^ b)
    // So, b = b ^ (a ^ b) ===> b ^ b ^ a ===> 0 ^ a ===> a
    a = a ^ b;  // Here b is a and a is (a ^ b)
    // So, a = (a ^ b) ^ a ===> a ^ a ^ b ===> 0 ^ b ===> b

    cout << a << " " << b << "\n";
    return 0;
}