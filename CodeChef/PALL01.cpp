#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void isPalindrome()
{
    int n;
    cin >> n;
    int temp = n;
    int reversed = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (temp == reversed)
    {
        cout << "wins" << "\n";
    }
    else
    {
        cout << "loses" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        isPalindrome();
    }
    
    return 0;
}