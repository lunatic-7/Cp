#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gift()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    char temp;

    if (s[0] == 'U')
    {
        y++;
        temp = 'Y';
    }
    else if (s[0] == 'D')
    {
        y--;
        temp = 'Y';
    }
    else if (s[0] == 'R')
    {
        x++;
        temp = 'X';
    }
    else if (s[0] == 'L')
    {
        x--;
        temp = 'X';
    }

    for (int i = 1; i < n; i++)
    {
        if (temp == 'X')
        {
            if (s[i] == 'U')
            {
                y++;
                temp = 'Y';
            }
            else if (s[i] == 'D')
            {
                y--;
                temp = 'Y';
            }
        }
        else if (temp == 'Y')
        {
            if (s[i] == 'L')
            {
                x--;
                temp = 'X';
            }
            else if (s[i] == 'R')
            {
                x++;
                temp = 'X';
            }
        }
    }

    cout << x << " " << y << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        gift();
    }
    
    return 0;
}