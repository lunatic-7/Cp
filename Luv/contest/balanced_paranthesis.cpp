#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

unordered_map<char, int> symbols = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};

int isBalanced(string &s)
{
    stack<char> st;
    for (char &bracket : s)
    {
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty()) return 0;
            if (symbols[st.top()] + symbols[bracket] != 0) return 0;
            st.pop();
        }
    }
    
    if (st.empty()) return 1;
    return 0;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        if (isBalanced(s))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}