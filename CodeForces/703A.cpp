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

    int mis, ch, m_pt = 0, c_pt = 0;
    for (int i = 0; i < n; ++i)
    {
    	cin >> mis >> ch;
    	if (mis > ch) m_pt++;
    	else if (ch > mis) c_pt++;
    }

    if (m_pt > c_pt) cout << "Mishka" << "\n";
    else if (c_pt > m_pt) cout << "Chris" << "\n";
    else cout << "Friendship is magic!^^" << "\n";

    return 0;
}