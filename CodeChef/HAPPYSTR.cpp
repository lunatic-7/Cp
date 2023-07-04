#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void vow()
{
    string s;
    cin >> s;
    int swi = 0;

    for (int i = 0; i < s.length() - 2; i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u') && (s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' || s[i + 2] == 'o' || s[i + 2] == 'u')) 
        {
            swi = 1;
            break;
        }   
    }

    if (swi)
    {
        cout << "Happy" << "\n";
    }
    else
    {
        cout << "Sad" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        vow();
    }
    
    return 0;
}