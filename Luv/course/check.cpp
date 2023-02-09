#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main(){
    wasif();
    double a = 100000;
    double b = 100000;
    double c = a * b;
    cout << c << "\n";
    cout << fixed << c << "\n";
    cout << fixed << setprecision(0) << c << "\n";

    int l = 100000;
    int m = 100000;
    cout << l * m << "\n";
    cout << l * 1LL * m << "\n";

    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        cout << s << "\n";
    }

    string s;
    cin >> s;

    int last_digit = s[s.size() - 1] - '0';
    cout << last_digit << "\n";

    string k;
    cin >> k;

    for (int i = 0; i < k.size(); ++i)
    {
        int tem = k[i];
        k[i] = tolower(tem);
    }
    cout << k << "\n";

    int cnt = 0;
    int chk = 1e5;

    while (chk > 0)
    {
        chk /= 2;
        cnt++;
    }

    cout << cnt << "\n";
    return 0;
}