#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void liga()
{
    int real = 0;
    int malaga = 0;
    int barc = 0;
    int elbar = 0;
    string s;
    int k;
    for (int i = 0; i < 4; i++)
    {

        cin >> s >> k;
        if (s == "Barcelona")
        {
            barc = k;
        }
        else if (s == "Malaga")
        {
            malaga = k;
        }
        else if (s == "RealMadrid")
        {
            real = k;
        }
        else if (s == "Eibar")
        {
            elbar = k;
        }
    }

    if (real < malaga && barc > elbar)
    {
        cout << "Barcelona" << "\n";
    }
    else
    {
        cout << "RealMadrid" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        liga();
    }
    
    return 0;
}