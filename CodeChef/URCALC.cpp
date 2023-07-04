#include <bits/stdc++.h>

using namespace std;
#define ll long long

void calc()
{
    double A, B;
    char op;
    cin >> A >> B;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << fixed << A + B << "\n";
        break;
    case '-':
        cout << fixed << A - B << "\n";
        break;
    case '*':
        cout << fixed << A * B << "\n";
        break;
    case '/':
        cout << fixed << A / B << "\n";
        break;
    
    default:
        break;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    calc();
    return 0;
}