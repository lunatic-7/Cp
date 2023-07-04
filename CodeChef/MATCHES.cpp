#include <bits/stdc++.h>

using namespace std;
#define ll long long

void match()
{
    map<char, int> m;
    m['0'] = 6;
    m['1'] = 2;
    m['2'] = 5;
    m['3'] = 5;
    m['4'] = 4;
    m['5'] = 5;
    m['6'] = 6;
    m['7'] = 3;
    m['8'] = 7;
    m['9'] = 6;
    int A, B;
    int matches = 0;
    string s;

    cin >> A >> B;

    // Converting int to string
    s = to_string(A + B);

    for (int i = 0; i < s.length(); i++)
    {
        // count check if this key exists in this map
        if (m.count(s[i]))
        {
            matches += m[s[i]];
        }   
    }

    cout << matches << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        match();
    }
    
    
    return 0;
}