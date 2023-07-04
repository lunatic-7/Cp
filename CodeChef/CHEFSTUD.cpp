#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void stud()
{
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '>')
        {
            s[i] = '<';
        }
        else if (s[i] == '<')
        {
            s[i] = '>';
        }
    }

    int count = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '>' && s[i + 1] == '<')
        {
            count++;
        }
    }

    cout << count << "\n";
    

}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        stud();
    }
    
    return 0;
}