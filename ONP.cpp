#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void postfix()
{
    string s;
    cin >> s;
    string pos;
    stack<char> stc;

    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            cout << s[i];
            pos.push_back(s[i]);
        }

        else if (s[i] == ')') {
            
            while (stc.top() != '(') {
                cout << stc.top();
                stc.pop();
            }
            stc.pop();
        }

        else stc.push(s[i]);
    }

    cout << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        postfix();
    }
    
    return 0;
}