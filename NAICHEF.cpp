#include <bits/stdc++.h>

using namespace std;
#define ll long long

void die()
{
    int N;
    double A, B;
    cin >> N >> A >> B;
    double size = N;
    double arr[N];
    int lenA = 0;
    int lenB = 0;

    // Adding to an array
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == A)
        {
            lenA++;
        }

        if (arr[i] == B)
        {
            lenB++;
        }
    }

    // Fixing the precision to 10 decimal places
    cout << fixed << setprecision(10) << lenA/size * lenB/size << "\n";
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        die();
    }
    
    
    return 0;
}