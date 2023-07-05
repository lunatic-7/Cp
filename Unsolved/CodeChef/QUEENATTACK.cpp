// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void atk()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    int count = 0;

    // Horizontal
    if (Y < N)
    {
        count += N - Y; 
    }
    if (Y > 1)
    {
        count += Y; 
    }

    // Vertical
    if (X < N)
    {
        count += N - X; 
    }
    if (X > 1)
    {
        count += X; 
    }

    /// Diagonal
    int tmx = X;
    int tmy = Y;

    while (tmx < N && tmy < N)
    {
        tmx++; tmy++;
        count++;
    }

    tmx = X;
    tmy = Y;
    
    while (tmx > 1 && tmy > 1)
    {
        tmx--; tmy--;
        count++;
    }
    
    tmx = X;
    tmy = Y;
    
    while (tmx > 1 && tmy < N)
    {
        tmx--; tmy++;
        count++;
    }
    
    tmx = X;
    tmy = Y;
    
    while (tmx < N && tmy > 1)
    {
        tmx++; tmy--;
        count++;
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {    
        atk();
    }
    
    return 0;
}