#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void easy()
{
    int n;
    cin >> n;
    int cake = 0, sim = 0, easy = 0, med = 0, e_med = 0, med_h = 0, hard = 0; 

    string s;
    while (n--)
    {
        cin >> s;
        if (s == "cakewalk")
        {
            cake++;
        }
        else if (s == "simple")
        {
            sim++;
        }
        else if (s == "easy")
        {
            easy++;
        }
        else if (s == "easy-medium")
        {
            e_med++;
        }
        else if (s == "medium")
        {
            med++;
        }
        else if (s == "medium-hard")
        {
            med_h++;
        }
        else if (s == "hard")
        {
            hard++;
        }
    }
    
    if (cake && sim && easy && (e_med || med) && (med_h || hard))
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        easy();
    }
    
    return 0;
}