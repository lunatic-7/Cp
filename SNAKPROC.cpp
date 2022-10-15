#include <bits/stdc++.h>

using namespace std;
#define ll long long

void ht()
{
    int L;
    cin >> L;
    string snake;
    int chk = 0;

    cin >> snake;
    for (int i = 0; i < L; i++)
    {
        if (snake[i] == 'H')
        {
            chk++;
            if (chk == 2)
            {
                break;
            }
            
        }
        else if (snake[i] == 'T')
        {
            chk--;
            if (chk == -1)
            {
                break;
            }
        }
    }

    if (chk == 0)
    {
        cout << "Valid" << "\n";
    }
    else
    {
        cout << "Invalid" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        ht();
    }
        
    return 0;
}