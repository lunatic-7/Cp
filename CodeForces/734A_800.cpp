#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton = count(s.begin(), s.end(), 'A');
    int danik = s.size() - anton;

    if (anton > danik) cout << "Anton" << "\n";
    else if (danik > anton) cout << "Danik" << "\n";
    else cout << "Friendship" << "\n";

    return 0;
}