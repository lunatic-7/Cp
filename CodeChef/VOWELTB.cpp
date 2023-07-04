#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    char c;
    cin >> c;

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "Vowel" << "\n";
    }
    else
    {
        cout << "Consonant" << "\n";
    }
    
    return 0;
}