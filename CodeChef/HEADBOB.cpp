#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void head()
{
    int N;
    cin >> N;
    
    string ges;
    cin >> ges;
    int ind = 0;
    int fr = 0;

    for (int i = 0; i < N; i++)
    {
        if (ges[i] == 'I')
        {
            ind = 1;
            break;
        }
        else if (ges[i] == 'Y')
        {
            fr = 1;
        }
    }

    if (ind)
    {
        cout << "INDIAN" << "\n";
    }
    else if (fr)
    {
        cout << "NOT INDIAN" << "\n";
    }
    else
    {
        cout << "NOT SURE" << "\n";
    }
    
    
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        head();
    }
    
    return 0;
}