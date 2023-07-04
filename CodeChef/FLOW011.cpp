#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void hr()
{
    double salary;
    cin >> salary;

    if (salary < 1500)
    {
        cout << fixed << setprecision(2) << salary + (salary * 10)/100 + (salary * 90)/100 << "\n";
    }
    else
    {
        cout << fixed << setprecision(2) << salary + 500 + (salary * 98)/100 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        hr();
    }
    
    return 0;
}