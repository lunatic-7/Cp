#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int a = 7;
    int b = 4;
    string s = to_string(a + b);
    cout << s.length();
    cout << typeid(s[0]).name();

    cout << s[0];
    cout << s[1];
    return 0;
}