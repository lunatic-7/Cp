// Generate all valid strings of given n.
// eg: n = 2 ---> output = {'(())', '()()'}
// eg: n = 3 ---> output = {'((()))', '(()())', '(())()', '()(())', '()()()'}

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<string> valid;  // Global vector to store generated valid strings

void generate(string &s, int open, int close)
{
    // Base case -> If we have finished all our brackets
    if (open == 0 && close == 0)
    {
        // pushing a valid generated string in our global valid vector
        valid.PB(s);
        return;
    }

    // If we have opening brackets present
    if (open > 0)
    {
        s.PB('(');
        generate(s, open - 1, close);
        // Backtracking
        s.POB();
    }

    // If we have closing bracket present
    if (close > 0)
    {
        // If we have more opening brackets in string than closing
        if (open < close)
        {
            s.PB(')');
            generate(s, open, close - 1);
            // Backtracking
            s.POB();
        }
    }
}

int main()
{
    wasif();
    int n;
    cin >> n;
    string s;

    // Generating string recursive function
    generate(s, n, n);

    // Printing the generated strings from global vector
    for (auto &st : valid)
    {
        cout << st << "\n";
    }
    
    return 0;
}
