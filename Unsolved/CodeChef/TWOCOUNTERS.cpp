// WRONG ANSWER
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void eight()
{
    ll n, m;
    cin >> n >> m;
    ll trr[m], err[m];
    queue<ll> time;
    queue<ll> q;
    int a = 0, b = 0;
    int score = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> trr[i];
        time.push(trr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> err[i];
        q.push(err[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (q.front() == 1)
        {
            a++;
        }
        else
        {
            b++;
        }
        // cout << a << "-" << b << " ";
        
        if (i == time.front())
        {
            time.pop();
            if (err[i - 1] == 1)
            {
                q.pop();
                if (a > b)
                {
                    score++;
                }
                else
                {
                    a = 0;
                    b = 0;
                }
            }
            else
            {
                q.pop();
                if (a < b)
                {
                    score++;
                }
                else
                {
                    a = 0;
                    b = 0;
                }
            }
        }
    }   
    // cout << "\n";

    cout << score << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        eight();
    }
    
    return 0;
}